# Lab 8: Personal Music Library

This project allows a user to create and maintain a music library of their songs using a **Linked List**.

## Linked List Structure
The struct used in the Linked List contains the following data:
+ Artist Name
+ Song Name
+ Genre Name
+ Pointer to next node

In the code it is writen as:
```
typedef struct node {
    char *artist ;
    char *songName ;
    char *genre ;
    struct node *nextNode ;
} Node;
```

+ The strings in the node struct are dynamically allocated memory, thus they are also free'd using free()
+ The Linked List music library is sorted in alphabetical order of song names

## User Inputs/Commands
+  **I  : Insert** song into the library (provide song name, artist and genre)
+  **P  : Print** the music library to show all songs
+  **S  : Search** song my song name, it will be printed a long with its artist and genre
+  **D  : Delete** song from library
+  **Q  : Quit** from the program. All songs will be deleted and program ends

## Example Program Output

![]()
