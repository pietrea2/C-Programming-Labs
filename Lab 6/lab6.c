#include <stdio.h>
#include <stdbool.h>

//functions implemented in the main function
void printBoard(char board[][26], int n);
bool positionInBounds(int n, char row, char col);
bool checkLegalInDirection(char board[][26], int n, char row, char col, char colour, int deltaRow, int deltaCol);
void printStartingBoard ( char array[][26], int n );
void placePieceOnBoard(char array[][26], char colour, char row, char col);
bool checkIfAvailableSpot(char array[][26], char colour, int n, char row, char col);
void FLIP( char array[][26], int n, char row, char col, char colour, int deltaRow, int deltaCol);

int main(void) {
    
	//declare a 2-Dimensional array (the Reversi playing board)
    char board[26][26];
    int dimension;
    
	//prompt user for Reversi board dimension, and print the initial board layout
	printf("Enter the board dimension: ");
    scanf("%d", &dimension);
    
    printStartingBoard(board, dimension);
    
    
	//prompt user to input any desired board configuration
	//End configuration by typing in "!!!"
    printf("Enter board configuration:\n");
    
    bool stop = false;
    while(stop == false){
        
        char COLOUR, ROW, COLUMN;
        
        scanf(" %c%c%c", &COLOUR, &ROW, &COLUMN);
        
        placePieceOnBoard(board, COLOUR, ROW, COLUMN);
       
        if ( COLOUR == '!' && ROW == '!' && COLUMN == '!' ) {
            stop = true;
        }
    }

	//print updated Reversi board with implemented board configuration
    printBoard(board, dimension);
    
    
    //finding and printing the available moves for the White player
    printf("Available moves for W:\n");
    
    char COLOUR = 'W';
    
    for(int rowWhite = 0; rowWhite < dimension; rowWhite++){
    
        for(int colWhite = 0; colWhite < dimension; colWhite++){
            
            if( checkIfAvailableSpot( board, COLOUR, dimension, (char)('a' + rowWhite), (char)('a' + colWhite) ) == true ){
                
                printf("%c%c\n", 'a' + rowWhite, 'a' + colWhite);
            }
        }
   }
   
   //finding and printing the available moves for the Black player
   printf("Available moves for B:\n");
    
    COLOUR = 'B';
    
    for(int rowWhite = 0; rowWhite < dimension; rowWhite++){
    
        for(int colWhite = 0; colWhite < dimension; colWhite++){
            
            if( checkIfAvailableSpot( board, COLOUR, dimension, (char)('a' + rowWhite), (char)('a' + colWhite) ) == true ){
                
                printf("%c%c\n", 'a' + rowWhite, 'a' + colWhite);
            }
        }
   }
   
   
   //prompt user to input/play a move (Type in colour, row and column of move)
    printf("Enter a move:\n");
   
    char moveColour, moveRow, moveColumn;
        
    scanf(" %c%c%c", &moveColour, &moveRow, &moveColumn);
    
     //program checks if the players move is legal.
	 //If its legal, the board will be updated  and printed with all neccessary colours flipped accordingly
    if ( checkIfAvailableSpot( board, moveColour, dimension, moveRow, moveColumn) ){
        printf("Valid move.\n");
        placePieceOnBoard(board, moveColour, moveRow, moveColumn);
    
        for(int delta_row = -1; delta_row <= 1; delta_row++){
            
            for(int delta_col = -1; delta_col <= 1 ; delta_col++){
                    
                FLIP(board, dimension, moveRow, moveColumn, moveColour, delta_row, delta_col);    
                
            }
        }
        printBoard(board, dimension); 
    }
    
	//if the player's move is invalid, the move is not placed on the board
	//and the original board configuration is printed 
    else{
        printf("Invalid move.\n");
        printBoard(board, dimension);
    }
    
   
return 0;
}





//this function takes a given coordinate on the board, and a deltaRow and Delta column,
//then all the opposite colours in one specific path/row/column are "flipped", changed to the opposite colour
void FLIP( char array[][26], int n, char row, char col, char colour, int deltaRow, int deltaCol){
    
    //the amount of times the "deltaRow" and "deltaCol" are added to a specific given coordinate
    int addRow = 0;
    int addCol = 0;
    
	//two cases, if the players colour is white, then opponents colours will be changed to white as well
    if (colour == 'W' ){
		
		//coordinate has to be in bounds, and has to include the opponents colour
        while( positionInBounds(n, row + deltaRow + addRow, col + deltaCol + addCol) && array[(int)(row) - 97 + deltaRow + addRow][(int)(col) - 97 + deltaCol + addCol] == 'B' ){
            array[(int)(row) - 97 + deltaRow + addRow][(int)(col) - 97 + deltaCol + addCol] = colour;
            
			//move further down the same path to check for more colours to be flipped
            addRow = addRow + deltaRow;
            addCol = addCol + deltaCol;
        }
    }
    
	//if the player's colour is black, flip any white coloursin the same direction to black 
    if (colour == 'B' ){
        while( positionInBounds(n, row + deltaRow + addRow, col + deltaCol + addCol) && array[(int)(row) - 97 + deltaRow + addRow][(int)(col) - 97 + deltaCol + addCol] == 'W' ){
            array[(int)(row) - 97 + deltaRow + addRow][(int)(col) - 97 + deltaCol + addCol] = colour;
            
            addRow = addRow + deltaRow;
            addCol = addCol + deltaCol;
        }
    }

}


//this function checks if a specific coordinate on the board is an available move to play.
//moves are only available if there are opposing colours to be captured
//this function also figures out which direction it can potentially flip any opponents colours
bool checkIfAvailableSpot(char array[][26], char colour, int n, char row, char col){
    
    bool legal = false;
    
    if (array[row - 'a'][col - 'a'] != 'U') {return false;}
    
	//all 8 directions around each spot on the board is checked to see if there are 
	//empty spaces, or any neighbouring colours
    for(int delta_row = -1; delta_row <= 1; delta_row++){
        
        for(int delta_col = -1; delta_col <= 1 ; delta_col++){
            
            if (!(delta_row == 0 && delta_col == 0)) {
				
                if( checkLegalInDirection(array, n, row, col, colour, delta_row, delta_col) ){
                    return true;   
                }
            }
        }
    }
return legal;
}



//function checks if any coordinte is considered "out of bounds" on the board
bool positionInBounds(int n, char row, char col){
    
    if( row >= 97 && row <= (97 + n - 1) && col >= 97 && col <= (97 + n - 1) ){

        return true;
    }
    else {
       
        return false;
    }
    
}


//function checks if a specific coordinate is a legal move fore sure.
//using a given "deltaRow" and "deltaColumn", this function with continue moving down
//a specific path until it can declare whether there are any colour to be flipped
bool checkLegalInDirection(char board[][26], int n, char row, char col, char colour, int deltaRow, int deltaCol){
    
    bool available = false;
    int xAdd = 0;
    int yAdd = 0;
    int counter = 0;
    
	// this while loop continues until specifications are not met (to flip opponents colours)
    while(!available){
        
		//first condition, position has to be in bounds of the board
        if( positionInBounds(n, row + deltaRow + xAdd, col + deltaCol + yAdd) ){
            
			//second condition, the spot can't be unoccupied
            if( board[ (int)(row) - 97 + deltaRow + xAdd ][ (int)(col) - 97 + deltaCol + yAdd ] == 'U' ){
                
                return false;
            }
            else{
				
				//if the same colour is detected (but is not the first neighbouring colour), then this declares that a
				//row/column/path can be flipped
                if( board[ (int)(row) - 97 + deltaRow + xAdd ][ (int)(col) - 97 + deltaCol + yAdd ] == colour){
                    
                    if( counter > 0 ){
                        
                        return true;
                    }
                    
					//if the spot adjacent to the coordinate is the same colour, stop checking, can't capture any colours
                    if (counter == 0) return false;
                }
				
				//if opposite colour is detected, continue looping
                else if( board[ (int)(row) - 97 + deltaRow + xAdd ][ (int)(col) - 97 + deltaCol + yAdd ] != colour ){
                    available = false;
                }
            }
        }
        else{
            return false;
        }
        
        xAdd = xAdd + deltaRow;
        yAdd = yAdd + deltaCol;
        counter++;
    }
	
	return false;
    
}




//this function prints the full updated Reversi playing board
void printBoard(char board[][26], int n){
    
	//prints board by looping through each row and column
    for(int row = 0; row <= n; row++){
        
        if (row == 0){
           
            for(int col = 1; col <= n + 2; col++){
            
                if(col == 1 || col == 2){
                    printf(" ");
                }
                else{
                    printf("%c", 'a' + col - 3);
                }
            } 
            printf("\n");
        }
        else {
        
            printf("%c ", 'a' + row - 1);
                
            for (int COL = 0; COL < n; COL++){
                
                printf("%c", board[row - 1][COL]);
            }
        printf("\n");
        }
    }
}



//this function "places" a colour piece on the board (updated and prints array)
void placePieceOnBoard(char array[][26], char colour, char row, char col){
    
    int rowIndex = row - 97;
    int colIndex = col - 97;
    
    array[rowIndex][colIndex] = colour;
}


//this function declares and prints the original layout of the starting Reversi board
void printStartingBoard ( char array[][26], int n ) {
    
    for(int row = 0; row <= n; row++){
        
        if (row == 0){
           
            for(int col = 1; col <= n + 2; col++){
            
                if(col == 1 || col == 2){
                    printf(" ");
                }
                else{
                    printf("%c", 'a' + col - 3);
                }
            } 
            printf("\n");
        }
        else {
        
            printf("%c ", 'a' + row - 1);
                
            for (int COL = 0; COL < n; COL++){
                
                if( (row == n/2 && COL == n/2 - 1) || (row == n/2 + 1 && COL == n/2)){
                    array[row - 1][COL] = 'W';
                    printf("%c", array[row - 1][COL]);
                }
                else if( (row == n/2 + 1 && COL == n/2 - 1) || (row == n/2 && COL == n/2)){
                    array[row - 1][COL] = 'B';
                    printf("%c", array[row - 1][COL]);
                }
                else{
                    array[row - 1][COL] = 'U';
                    printf("%c", array[row - 1][COL]);
                }
            }
        printf("\n");
        }
    }
       
}