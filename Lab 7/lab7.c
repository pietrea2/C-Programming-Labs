#include <stdio.h>
#include <stdbool.h>

void printBoard(char board[][26], int n);
bool positionInBounds(int n, char row, char col);
bool checkLegalInDirection(char board[][26], int n, char row, char col, char colour, int deltaRow, int deltaCol);
void printStartingBoard ( char array[][26], int n );
void placePieceOnBoard(char array[][26], char colour, char row, char col);
bool checkIfAvailableSpot(char array[][26], char colour, int n, char row, char col);
void FLIP_colours( char array[][26], int dimension, char row, char col, char colour, int deltaRow, int deltaCol);


//Additional functions for computer algorithm to play
bool colourHasAvailableMoves(char array[][26], int dimension, char colour);
char oppositeColour(char colour);
void computerPlaysItsTurn(char array[][26], int dimension, char colour);
int totalScoreOfMove(char array[][26], int dimension, char colour, char row, char col);
int numberOfColoursOnBoard(char array[][26], int dimension, char colour);

int main(void) {
    
    char board[26][26];
    int boardDimension;
    char computerColour;
    char playerTurn = 'B';
    bool gameIsNotOverYet = true;
    
    
    printf("Enter the board dimension: ");
    scanf("%d", &boardDimension);
    
    printf("Computer plays (B/W) : ");
    scanf(" %c", &computerColour);
    
    printStartingBoard( board, boardDimension );
    
    
    while( gameIsNotOverYet ){
        
        if( playerTurn == computerColour ){
            computerPlaysItsTurn( board, boardDimension, computerColour );
            printBoard( board, boardDimension );
        }
        else {
            printf("Enter move for colour %c (RowCol): ", oppositeColour(computerColour) );
            
            char humanMoveRow, humanMoveColumn;
            scanf(" %c%c", &humanMoveRow, &humanMoveColumn);
            
            if ( checkIfAvailableSpot(board, oppositeColour(computerColour), boardDimension, humanMoveRow, humanMoveColumn) ){
                
                placePieceOnBoard( board, oppositeColour(computerColour), humanMoveRow, humanMoveColumn );
            
                for( int delta_row = -1; delta_row <= 1; delta_row++ ){
                    for( int delta_col = -1; delta_col <= 1 ; delta_col++ ){
                        FLIP_colours( board, boardDimension, humanMoveRow, humanMoveColumn, oppositeColour(computerColour), delta_row, delta_col );    
                    }
                }
                
                printBoard(board, boardDimension);
            }
            else{
                printf("Invalid move.\n%c player wins.", computerColour);
                gameIsNotOverYet = false;
            }
        }
        
        if ( gameIsNotOverYet ){
            
            if ( colourHasAvailableMoves(board, boardDimension, oppositeColour(computerColour) ) || colourHasAvailableMoves(board, boardDimension, computerColour) ){
                
                if( computerColour == playerTurn ){  
                    playerTurn = oppositeColour(computerColour);
                }
                else{  
                    playerTurn = computerColour;
                }
                gameIsNotOverYet = true;
            }
            else{
                
                if( numberOfColoursOnBoard(board, boardDimension, computerColour) > numberOfColoursOnBoard(board, boardDimension, oppositeColour(computerColour) ) ){
                    printf("%c player wins.", computerColour);
                }
                else if( numberOfColoursOnBoard(board, boardDimension, computerColour) < numberOfColoursOnBoard(board, boardDimension, oppositeColour(computerColour) ) ){
                    printf("%c player wins.", oppositeColour(computerColour) );
                }
                else if( numberOfColoursOnBoard(board, boardDimension, computerColour) == numberOfColoursOnBoard(board, boardDimension, oppositeColour(computerColour) ) ){
                    printf("Draw!");
                }
                gameIsNotOverYet = false;
            }
        }
    }
    
    return 0;
}


//checks if the player or computer algorithm has a chance to play a turn
bool colourHasAvailableMoves(char array[][26], int dimension, char colour){
        
    for(int boardRow = 0; boardRow < dimension; boardRow++){
        for(int boardColumn = 0; boardColumn < dimension; boardColumn++){
            if( checkIfAvailableSpot( array, colour, dimension, (char)('a' + boardRow), (char)('a' + boardColumn) ) == true ){
                return true;
            }
        }
    }
        
    return false;
}



char oppositeColour(char colour){
    
    if(colour == 'B'){
        return 'W'; 
    }
    else if(colour == 'W'){
        return 'B';
    }
}


//computer algorithm: finds best move to play
//according to what move scores the most points on the board
void computerPlaysItsTurn(char array[][26], int dimension, char colour) {
        
    char bestMoveRow, bestMoveColumn;
    char *pointerBestRow = &bestMoveRow;
    char *pointerBestColumn = &bestMoveColumn;
    int maximumScore = 0;
    
    if( colourHasAvailableMoves(array, dimension, colour) == false ){
       printf("%c player has no valid move.\n", colour); 
       return;
    }
    
        for(int row = dimension - 1; row >= 0; row--){
            for(int column = dimension - 1; column >= 0; column--){
                
                if( checkIfAvailableSpot(array, colour, dimension, (char)( row + 97 ), (char)( column + 97 )  )  ) {
                    
                    if( totalScoreOfMove(array, dimension, colour, (char)( row + 97 ), (char)( column + 97 )  ) >= maximumScore ){
                        
                        maximumScore = totalScoreOfMove(array, dimension, colour, (char)( row + 97 ), (char)( column + 97 ) );
                        
                        *pointerBestRow = (char)( row + 97 );
                        *pointerBestColumn = (char)( column + 97 );
                    }
                }
            }
        }
    
    placePieceOnBoard(array, colour, bestMoveRow, bestMoveColumn);
    
    for(int delta_row = -1; delta_row <= 1; delta_row++){
        for(int delta_col = -1; delta_col <= 1 ; delta_col++){
            FLIP_colours(array, dimension, bestMoveRow, bestMoveColumn, colour, delta_row, delta_col);    
        }
    }
    
    printf("Computer places %c at %c%c\n", colour, bestMoveRow, bestMoveColumn);
}
 


int totalScoreOfMove(char array[][26], int dimension, char colour, char row, char col){
    
    char temporaryBoard[26][26];
            
    for(int ROW =  0; ROW < dimension; ROW++){
        for(int COLUMN = 0; COLUMN < dimension; COLUMN++){
            temporaryBoard[ROW][COLUMN] = array[ROW][COLUMN];
        }
    }
    
    placePieceOnBoard(temporaryBoard, colour, row, col);
    
        for(int delta_row = -1; delta_row <= 1; delta_row++){
            for(int delta_col = -1; delta_col <= 1 ; delta_col++){
                FLIP_colours(temporaryBoard, dimension, row, col, colour, delta_row, delta_col);    
            }
        }
        
    return numberOfColoursOnBoard(temporaryBoard, dimension, colour) - numberOfColoursOnBoard(array, dimension, colour) - 1;
}



int numberOfColoursOnBoard(char array[][26], int dimension, char colour){
    
    int counter = 0;
    
    for(int row = 0; row < dimension; row++){
        for(int column = 0; column < dimension; column++){
            
            if(array[row][column] == colour){
                counter++;
            }
        }
    }
    
    return counter;
}



void FLIP_colours( char array[][26], int dimension, char row, char col, char colour, int deltaRow, int deltaCol){
    
    int addRow = 0;
    int addCol = 0;
    
    if( checkLegalInDirection(array, dimension, row, col, colour, deltaRow, deltaCol) ){
        
        if ( colour == 'W' ){
            while( positionInBounds(dimension, (row + deltaRow + addRow), (col + deltaCol + addCol) ) && array[ (int)(row) - 97 + deltaRow + addRow ][ (int)(col) - 97 + deltaCol + addCol ] == 'B' ){
                
                array[ (int)(row) - 97 + deltaRow + addRow ][ (int)(col) - 97 + deltaCol + addCol ] = colour;
                addRow = addRow + deltaRow;
                addCol = addCol + deltaCol;
            }
        }
    
        if ( colour == 'B' ){
            while( positionInBounds(dimension, (row + deltaRow + addRow), (col + deltaCol + addCol)) && array[ (int)(row) - 97 + deltaRow + addRow ][ (int)(col) - 97 + deltaCol + addCol ] == 'W' ){
                
                array[ (int)(row) - 97 + deltaRow + addRow ][ (int)(col) - 97 + deltaCol + addCol ] = colour;
                addRow = addRow + deltaRow;
                addCol = addCol + deltaCol;
            }
        }
    }
}



bool checkIfAvailableSpot(char array[][26], char colour, int n, char row, char col){
    
    bool legal = false;
    
    if ( array[row - 'a'][col - 'a'] != 'U' ){ 
        return false; 
    }
    
    for ( int delta_row = -1; delta_row <= 1; delta_row++ ){
        for ( int delta_col = -1; delta_col <= 1 ; delta_col++ ){
            
            if ( !(delta_row == 0 && delta_col == 0) ){
                
                if( checkLegalInDirection(array, n, row, col, colour, delta_row, delta_col) ){
                    return true;   
                }
            }
        }
    }
    
    return legal;
}



bool positionInBounds( int n, char row, char col ){
    
    if( row >= 97 && row <= (97 + n - 1) && col >= 97 && col <= (97 + n - 1) ){
        return true;
    }
    else {
        return false;
    }
}



bool checkLegalInDirection( char array[][26], int n, char row, char col, char colour, int deltaRow, int deltaCol){
    
    bool available = false;
    int xAdd = 0;
    int yAdd = 0;
    int counter = 0;
    
    while( !available ){
        
        if( positionInBounds(n, row + deltaRow + xAdd, col + deltaCol + yAdd) ){
            
            if( array[ (int)(row) - 97 + deltaRow + xAdd ][ (int)(col) - 97 + deltaCol + yAdd ] == 'U' ){
                return false;
            }
            else{
                
                if( array[ (int)(row) - 97 + deltaRow + xAdd ][ (int)(col) - 97 + deltaCol + yAdd ] == colour){
                    
                    if( counter > 0 ){
                        return true;
                    }
                    
                    if (counter == 0){ 
                        return false;
                    }
                }
                else if( array[ (int)(row) - 97 + deltaRow + xAdd ][ (int)(col) - 97 + deltaCol + yAdd ] != colour ){
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

}



void printBoard( char array[][26], int n ){
    
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
                
                printf("%c", array[row - 1][COL]);
            }
        printf("\n");
        }
    }
}



void placePieceOnBoard(char array[][26], char colour, char row, char col){
    
    int rowIndex = row - 97;
    int colIndex = col - 97;
    
    array[rowIndex][colIndex] = colour;
}



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