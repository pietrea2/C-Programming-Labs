//
// APS105 Lab 8 Lab8.c
//
// This is a program written to maintain a personal music library, 
// using a linked list to hold the songs in the library.
//
// Author: <Adam Pietrewicz>
// Student Number: <1004401818>
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

// A node in the linked list

// Each string in the node is declared as a character pointer variable,
// so they need to be dynamically allocated using the malloc() function,
// and deallocated using the free() function after use.

typedef struct node {
    char *artist ;
    char *songName ;
    char *genre ;
    struct node *nextNode ;
} Node;

// Declarations of linked list functions
//
// DECLARE YOUR LINKED-LIST FUNCTIONS HERE
//
Node *insertToLinkList(Node *head, char song[], char artist[], char genre[]);
Node *newNode(char song[], char artist[], char genre[], Node *nextNode);
void printLinkedList(Node *head);

Node *insertIntoOrderedList(Node *head, char song[], char artist[], char genre[]);
Node *deleteAllOccurrences( Node *head, char songNAME[] );
Node *deleteNode(Node *head, char songNAME[] );


Node *deleteAllNodes(Node *head);
bool search(Node *head, char *searchKey);
bool searchAndPrint(Node *head, char *searchKey);
void printLinkedList_Deletion(Node *head);


// Declarations of support functions
// See below the main function for descriptions of what these functions do

void inputStringFromUser( char prompt[], char s[], int arraySize ) ;
void songNameDuplicate( char songName[] ) ;
void songNameFound( char songName[] ) ;
void songNameNotFound( char songName[] ) ;
void songNameDeleted( char songName[] ) ;
void artistFound( char artist[] ) ;
void artistNotFound( char artist[] ) ;
void printMusicLibraryEmpty( void ) ;
void printMusicLibraryTitle( void ) ;

const int MAX_LENGTH = 1024;

int main( void ) {
    // Declare the head of the linked list.
    //   ADD YOUR STATEMENT(S) HERE

    Node *head = NULL;
    //head = (Node *)malloc( sizeof(Node *));

    // Announce the start of the program
    printf( "Personal Music Library.\n\n" ) ;
    printf( "%s", "Commands are I (insert), D (delete), S (search by song name),\n"
         "P (print), Q (quit).\n" ) ;
    
    char response ;
    char input[ MAX_LENGTH + 1 ] ;
    do {
        inputStringFromUser( "\nCommand", input, MAX_LENGTH ) ;

        // Response is the first character entered by user.
        // Convert to uppercase to simplify later comparisons.
        response = toupper( input[0] ) ;

        if( response == 'I' ) {
            // Insert a song into the linked list.
            // Maintain the list in alphabetical order by song name.
            //   ADD STATEMENT(S) HERE
            
            char SongName[MAX_LENGTH + 1];
            char ArtistName[MAX_LENGTH + 1];
            char GenreName[MAX_LENGTH + 1];
            
            char *promptName = "Song name";
            char *promptArtist = "Artist";
            char *promptGenre = "Genre";
            
            inputStringFromUser( promptName, SongName, MAX_LENGTH);
            inputStringFromUser( promptArtist, ArtistName, MAX_LENGTH);
            inputStringFromUser( promptGenre, GenreName, MAX_LENGTH);
            
           //printf("%s %s %s \n", SongName, ArtistName, GenreName);
           // printf("%lf %lf %lf \n", &SONG, &ARTIST, &GENRE);
            head = insertIntoOrderedList(head, SongName, ArtistName, GenreName);
            
            // USE THE FOLLOWING STRINGS WHEN PROMPTING FOR DATA:
            //    char *promptName = "Song name" ;
            //    char *promptArtist =  "Artist" ;
            //    char *promptGenre = "Genre" ;

        }
        else if( response == 'D' ) {
            // Delete a song from the list.

            char *prompt = "\nEnter the name of the song to be deleted" ;
            char nameOfSong[MAX_LENGTH + 1];

            //   ADD STATEMENT(S) HERE
            
            
            inputStringFromUser(prompt, nameOfSong, MAX_LENGTH);
            //printf("%s\n", nameOfSong);
            //head = deleteAllOccurrences(head, nameOfSong);
            
			
			if( search(head, nameOfSong) ){
				head = deleteNode(head, nameOfSong);
				songNameDeleted(nameOfSong);
			}
			else{
				printf("\nOops! The song '%s' is not in your music library. Therefore the"
							"\nsong '%s' was not deleted from your library. \n", nameOfSong, nameOfSong);
			}
            
            
        }
        else if( response == 'S' ) {
            // Search for a song by its name.

            char *prompt = "\nEnter the name of the song to search for" ;
            char nameOfSong[MAX_LENGTH + 1];

            //   ADD STATEMENT(S) HERE
            
            inputStringFromUser(prompt, nameOfSong, MAX_LENGTH);
            
            if( search(head, nameOfSong) ){
                songNameFound(nameOfSong);
				searchAndPrint(head, nameOfSong);
            }
            else{
                songNameNotFound(nameOfSong);
            }
			
				
            
            

        }
        else if( response == 'P' ) {
            // Print the music library.

            //   ADD STATEMENT(S) HERE
			if(head != NULL){
				 printMusicLibraryTitle();
				printLinkedList(head);
			}
			else{
				printMusicLibraryEmpty();
			}
       
		
		

        }
        else if( response == 'Q' ) {
            ; // do nothing, we'll catch this below
        }
        else {
            // do this if no command matched ...
            printf( "\nInvalid command.\n" ) ;
        }
    } while( response != 'Q' ) ;
  
    // Delete the entire linked list.
    //   ADD STATEMENT(S) HERE
	
	printLinkedList_Deletion(head);
	
    head = deleteAllNodes(head);
    

    // Print the linked list to confirm deletion.
    //   ADD STATEMENT(S) HERE
	
	printLinkedList(head);
	
	printMusicLibraryEmpty();
	
	

    return 0 ;
}

// Support Function Definitions

// Prompt the user for a string safely, without buffer overflow
void inputStringFromUser(char prompt[], char s[], int maxStrLength) {
    int i = 0;
    char c;
    
    printf( "%s --> ", prompt ) ;
    while( i < maxStrLength && (c = getchar()) != '\n' )
        s[i++] = c ;
    s[i] = '\0' ;
}

// Function to call when the user is trying to insert a song name 
// that is already in the personal music library.
void songNameDuplicate( char songName[] ) {
    printf( "\nA song with the name '%s' is already in the music library.\n"
            "No new song entered.\n", songName);
}

// Function to call when a song name was found in the personal music library.
void songNameFound( char songName[] ) {
    printf( "\nThe song name '%s' was found in the music library.\n",
           songName ) ;
}

// Function to call when a song name was not found in the personal music library.
void songNameNotFound( char songName[] ) {
    printf( "\nThe song name '%s' was not found in the music library.\n",
           songName);
}

// Function to call when a song name that is to be deleted
// was found in the personal music library.
void songNameDeleted( char songName[] ) {
    printf( "\nDeleting a song with name '%s' from the music library.\n",
           songName);
}

// Function to call when printing an empty music library.
void printMusicLibraryEmpty(void) {
    printf( "\nThe music library is empty.\n" ) ;
}

// Function to call to print a title when the entire music library is printed.
void printMusicLibraryTitle(void) {
    printf( "\nMy Personal Music Library: \n" ) ;
}

// Add your functions below this line.

//   ADD STATEMENT(S) HERE
Node *deleteNode(Node *head, char songNAME[] ){
    if(head == NULL){
        return NULL;
    }
    //printf("%s\n", songNAME);
    //printf("%d\n", strcmp(head -> songName, songNAME) );
    
    if( strcmp(head -> songName, songNAME) == 0 ) {
        Node *secondNode = head -> nextNode;
        
        //printf("%s", secondNode -> songName);
        
        free(head);
        
        //printf("hello");
        
        //free(head -> songName);
        //free(head -> artist);
        //free(head -> genre);
        return secondNode;
    }
    
    bool found = false;
    Node *current = head;
    
    while( !found && current -> nextNode != NULL ){
        if( strcmp(current -> nextNode -> songName, songNAME) == 0 ){
            found = true;
        }
        else{
            current = current -> nextNode;
        }
    }
    
    if(current -> nextNode != NULL ){
       Node *nodeToRemove = current -> nextNode;
        current -> nextNode = current -> nextNode -> nextNode;
        free(nodeToRemove);
    }
    return head;
}




Node *insertToLinkList(Node *head, char song[], char artist[], char genre[]){
    return newNode(song, artist, genre, head);
}

Node *newNode(char song[], char artist[], char genre[], Node *link){
    
    Node *t = (Node *) malloc( sizeof(Node ) );
    artist = strdup(artist);
    genre = strdup(genre);
    song = strdup(song);
    
    if( t != NULL ){
        t -> songName = (char *)malloc( sizeof(char *) );
        t -> artist = (char *)malloc( sizeof(char *) );
        t -> genre = (char *)malloc( sizeof(char *) );

        t -> artist = artist;
        t -> songName = song;
        t -> genre = genre;
        t -> nextNode = link;
        
    }
    return t;
    
}

void printLinkedList(Node *head){
    Node *current = head;
    
    while(current != NULL){
        printf("\n%s\n%s\n%s\n", current -> songName,  current -> artist, current -> genre);
        current = current -> nextNode;
    }
}

void printLinkedList_Deletion(Node *head){
    Node *current = head;
    
    while(current != NULL){
		songNameDeleted(current -> songName);
        //printf("\n%s\n%s\n%s\n", current -> songName,  current -> artist, current -> genre);
        current = current -> nextNode;
    }
}


Node *insertIntoOrderedList(Node *head, char song[], char artist[], char genre[]){
    
    if (search(head, song) ){
        songNameDuplicate(song);
        return head;
    }
    
    if( head == NULL || strncmp(song, head -> songName, 15) < 0 ){
        return newNode(song, artist, genre, head);
    } 
    
    Node *current = head;
    
    while( current -> nextNode != NULL && strncmp(song, current -> nextNode -> songName, 15) > 0 ){
        
        //if( strncmp(song, current -> nextNode -> songName, 15) == 0 ){
          //  songNameDuplicate(song);
            //return head;
       // }
        current = current -> nextNode;
        
    }
    current -> nextNode = newNode(song, artist, genre, current -> nextNode);
    return head;
}


// Deleting all the nodes in the linked list
Node *deleteAllNodes(Node *head) {
  while (head != NULL) {
     Node *firstNode = head;
     head = head -> nextNode;
     free(firstNode);
   
     // Alternatively...

     // Node * secondNode = head -> link;
     // free(head);
     // head = secondNode;
  }
  return NULL;
}


// Searching through the linked list for a particular key
bool search(Node *head, char *searchKey) {
  Node *current = head;

  while (current != NULL) {
    if ( strcmp(current -> songName, searchKey) == 0 ){
      return true;
    }

    current = current -> nextNode;
  }

  return false;
}


// Searching through the linked list for a particular key
bool searchAndPrint(Node *head, char *searchKey) {
  Node *current = head;

  while (current != NULL) {
    if ( strcmp(current -> songName, searchKey) == 0 ){
		//songNameFound(searchKey);
		printf("\n%s\n%s\n%s\n", current -> songName, current -> artist, current -> genre );
      return true;
    }

    current = current -> nextNode;
  }
	songNameNotFound(searchKey);
  return false;
}