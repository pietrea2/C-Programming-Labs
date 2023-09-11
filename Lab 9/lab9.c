//
// APS105 Lab 9 Lab9.c
//
// This is a program written to sort a personal music library
// using an array.
//
// The sorting algorithm is Cocktail Sort.
//
// Author: <Adam Pietrewicz>
// Student Number: <1004401818>
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// these next two lines should really be:
//    const int MAX_LIB_SIZE = 100;
//    const int MAX_LENGTH = 1024;
// but some (old) compilers seem to have a problem with them,
// so we will use preprocessor defines

#define MAX_LIB_SIZE 100
#define MAX_LENGTH 1024

typedef struct song {
    char songName[MAX_LENGTH];
    char artist[MAX_LENGTH];
    char genre[MAX_LENGTH];
} Song;

void inputStringFromUser(char prompt[], char s[], int arraySize);
void printMusicLibraryEmpty(void);
void printMusicLibraryTitle(void);
void printLibrary(Song library[], int size);
void cocktailSort(Song library[], int size);

int main(void) {
    Song library[MAX_LIB_SIZE];
    int librarySize = 0;  // number of elements stored in the library

    // Announce the start of the program
    printf("Personal Music Library.\n\n");
    printf("Commands are I (insert), S (sort by artist), P (print), Q (quit).\n");

    char response;
    char input[MAX_LENGTH + 1];
    do {
        inputStringFromUser("\nCommand", input, MAX_LENGTH);

        // Response is the first character entered by user.
        // Convert to uppercase to simplify later comparisons.
        response = toupper(input[0]);

        if (response == 'I') {
            // Insert a song into the array.
            
            char *promptName = "Song name";
            char *promptArtist = "Artist";
            char *promptGenre = "Genre";
            
             char SongName[MAX_LENGTH + 1];
            char ArtistName[MAX_LENGTH + 1];
            char GenreName[MAX_LENGTH + 1];
            
            inputStringFromUser( promptName, SongName, MAX_LENGTH);
            inputStringFromUser( promptArtist, ArtistName, MAX_LENGTH);
            inputStringFromUser( promptGenre, GenreName, MAX_LENGTH);
            
           strcpy( library[librarySize].songName, SongName);
            strcpy(library[librarySize].artist, ArtistName);
            strcpy(library[librarySize].genre, GenreName);
            
            librarySize++;
            

            // USE THE FOLLOWING STRINGS WHEN PROMPTING FOR DATA:
            //    char *promptName = "Song name";
            //    char *promptArtist =  "Artist";
            //    char *promptGenre = "Genre";

        } else if (response == 'P') {
            // Print the music library.
            
            printLibrary(library, librarySize);

        } else if (response == 'S') {
            // Sort the songs using Cocktail Sort, in
            // alphabetical order by artist, breaking ties
            // using song names
            
            cocktailSort(library, librarySize );

            // then print the music library
            
            printLibrary(library, librarySize);

        } else if (response == 'Q') {
            // do nothing

        } else {
            // do this if no command matched ...
            printf("\nInvalid command.\n");

        }
    } while(response != 'Q');

    return 0;
}


// Prompt the user for a string safely, without buffer overflow
void inputStringFromUser(char prompt[], char s[], int maxStrLength) {
    int i = 0;
    char c;

    printf("%s --> ", prompt);
    while(i < maxStrLength && (c = getchar()) != '\n')
        s[i++] = c;
    s[i] = '\0';
}


// Function to call when printing an empty music library.
void printMusicLibraryEmpty(void) {
    printf("\nThe music library is empty.\n");
}


// Function to call to print a title when the entire music library is printed.
void printMusicLibraryTitle(void) {
    printf("\nMy Personal Music Library: \n");
}


// Printing the entire music library
void printLibrary(Song library[], int size) {
    if (size == 0)
        printMusicLibraryEmpty();
    else {
        printMusicLibraryTitle();
        for(int i = 0; i < size; i ++)
            printf("\n%s\n%s\n%s\n",
                    library[i].songName,
                    library[i].artist,
                    library[i].genre);
    }
}


// Sorting the library array in descending alphabetical order, by artist 
void cocktailSort(Song library[], int size) {
    bool goingUp = true;
    bool sorted = false;
    bool shouldSwap;
    int bottom = 0, top = size - 1, i;

    while(bottom < top && !sorted) {
        sorted = true;

        if (goingUp) {
            for(i = bottom; i < top; i++) {
                // set shouldSwap to true if song i should go after song (i+1)
                //
                
                if( strcmp(library[i].artist, library[i+1].artist) > 0 ){
                    shouldSwap = true;
                }
                else{
                    shouldSwap = false;
                }
                

                if (shouldSwap) {
                    Song temp = library[i];
                    library[i] = library[i+1];
                    library[i+1] = temp;
                    sorted = false;
                }
            }

            top--;
            goingUp = false;
        } else {
            for (i = top; i > bottom; i--) {

              // set shouldSwap to true if song (i-1) should go after song i
              //
              if( strcmp(library[i-1].artist, library[i].artist) > 0 ){
                  shouldSwap = true;
              }
              else{
                  shouldSwap = false;
              }
              

              if (shouldSwap) {
                  Song temp = library[i-1];
                  library[i-1] = library[i];
                  library[i] = temp;
                  sorted = false;
              }
            }
        
            bottom++;
            goingUp = true;
        }
    }
}