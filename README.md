# C-Programming:
C programming labs/projects/practice from Computer Engineering University
Beginner to Advanced:
+ Input / Output
+ Flow Control
+ Functions
+ Arrays
+ Pointers
+ Data Structures

Included here are completed Labs 1-9 and tutorial/practice code in TUT1-6.

## [**Lab 0**](https://github.com/pietrea2/C-Programming---UofT-1st-Year/tree/main/Lab%200)
+ Basic printf statements of special characters

## [**Lab 1**](https://github.com/pietrea2/C-Programming---UofT-1st-Year/tree/main/Lab%201)
+ **Computing Standard Deviation**
+ C input/output and math computation

## [**Lab 2**](https://github.com/pietrea2/C-Programming---UofT-1st-Year/tree/main/Lab%202)
+ **Electrical Resistor Calculator**
  + **Input**: 4 colours of the bands on the resistor
  + **Output**: Total resistance (Ohms) + tolerance (Ohms)
+ There are 2 versions of this project:
  + Using arrays to store the colours of the resistor bands
  + _Not_ using arrays
 
    
![Resistor Band Image](/images/resistor-color-codes.png)


## [**Lab 3**](https://github.com/pietrea2/C-Programming---UofT-1st-Year/tree/main/Lab%203)
+ **Part 1: Coin Calculator**
  + Given amount of cents, program calculates least amount of coins that represent that amount
+ **Part 2: Arithmetic Calculator**
  + User inputs 2 numbers and can perform adding, subtracting, multiplying, dividing
 
## [**Lab 4**](https://github.com/pietrea2/C-Programming---UofT-1st-Year/tree/main/Lab%204)
+ **Part 1: Triangle Printer**
  + Program prints triangle with amount of rows given by user
 
![Printed Triangle](images/lab4_p1_triangle.png)

+ **Part 2: Binary to Decimal & Decimal to Binary Converter**
  + Input a decimal/binary number and receive its binary/decimal representation
 
## [**Lab 5**](https://github.com/pietrea2/C-Programming---UofT-1st-Year/tree/main/Lab%205)
+ **Bernoulli's Triangle Printer**
  + User inputs number of rows of the triangle to be printed

![Bernoulli/Pascal's Triangle](/images/bernoulli-triangle.jpg)


## [**Lab 6**](https://github.com/pietrea2/C-Programming---UofT-1st-Year/tree/main/Lab%206)
+ **Reversi Game** - Board Configuration and Move Legality Checking

![Reversi Board Game](/images/reversi-board.jpg)


![Starting Board Layout](images/reversi-start-board-pic.png)
![Code Starting Board](images/printed-reversi-board.png)


## [**Lab 7**](https://github.com/pietrea2/C-Programming---UofT-1st-Year/tree/main/Lab%207)
+ **Reversi Game Part 2** - Playing Game Against Computer Program

  + The computer algorithm plays moves that result in the most points that turn (most pieces flipped to its colour)
  + User plays game until there is a winner, or until user plays invalid move

## [**Lab 8**](https://github.com/pietrea2/C-Programming---UofT-1st-Year/tree/main/Lab%208)
+ **Personal Music Library**

  + User can create a music library of songs that is organized in a **Linked List**
  + Songs are sorted in alphabetical order by song name
  + **User Inputs/Commands**
    +  **I  : Insert** song into the library (provide song name, artist and genre)
    +  **P  : Print** the music library to show all songs
    +  **S  : Search** song my song name, it will be printed a long with its artist and genre
    +  **D  : Delete** song from library
    +  **Q  : Quit** from the program. All songs will be deleted and program ends


## [**Lab 9**](https://github.com/pietrea2/C-Programming---UofT-1st-Year/tree/main/Lab%209)
+ **Personal Music Library** with Sorting Algorithm

  + Music library is maintained with **array of structs**
  + Sort library by artist name using **Cocktail Sort** algorithm
  + **User Inputs/Commands**
    +  **I  : Insert** song into the library (provide song name, artist and genre)
    +  **P  : Print** the music library to show all songs
    +  **S  : Sort** the song library using **Cocktail Sort** in alphabetical order by artist, breaking ties using song names 
    +  **Q  : Quit** from the program. All songs will be deleted and program ends
