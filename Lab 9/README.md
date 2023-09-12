# Lab 9: Personal Music Library with Sorting Algorithm

This program allows a user to make a personal music library of their favourite songs, and includes the [**Cocktail Sorting algorithm**](https://www.geeksforgeeks.org/cocktail-sort/).

## Library Structure
The library is a simple array of these structs:
```
typedef struct song {
    char songName[MAX_LENGTH];
    char artist[MAX_LENGTH];
    char genre[MAX_LENGTH];
} Song;
```

+ The songs are inserted to the library in the order they are given

## User Inputs/Commands
+  **I  : Insert** song into the library (provide song name, artist and genre)
+  **P  : Print** the music library to show all songs
+  **S  : Sort** the song library using **Cocktail Sort** in alphabetical order by artist, breaking ties using song names 
+  **Q  : Quit** from the program. All songs will be deleted and program ends

## Example Program Output
