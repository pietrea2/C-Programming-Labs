# Lab 6: Reversi Game - Board Configuration and Move Legality Checking

This is a C implementation of the board-type game called _Reversi_ (also called _Othello_).

The game objective: to place your coloured pieces around your opponents in order to flip them into your colour. Player with most coloured pieces wins.

+ **Step 1:**
  + User must input the dimensions of the board (size >= 4). The board size will be a square n x n. Assume board size will be even and never greater than 26.
  + **Input integer number >= 4 and <= 26 for board dimension**
 
![Lab 6 Step 1 and 2](/../main/images/lab6_p1.png)
+ **Step 2:**
  + The starting board will be printed on screen
+ **Step 3:**
  + User will enter the board configuration (placing as many pieces on the board where available)
  + Enter 3 characters with no spaces in between:
    + **B or W:** black or white piece
    + **a - z:** row
    + **a - z:** column
    + Press ENTER to add piece onto board
    + Repeat as many times
    + Enter **!!!** sequence to finish board configuration
   
![Lab 6 Step 3](/../main/images/lab6_p2.png)
+ **Step 4:**
  + Board will be printed with new configuration
  + Program will print out the available moves for Black and White
 
![Lab 6 Step 4](/../main/images/lab6_p3.png)
+ **Step 5:**
  + Program will ask user to enter a move. Use same input format as in Step 3:
    + **B or W:** black or white piece
    + **a - z:** row
    + **a - z:** column
    + ENTER

![Lab 6 Step 5 and 6](/../main/images/lab6_p4.png)
+ **Step 6:**
  + Program will print if that is a valid move, and print the new board
  + End of program
 

Other sample output:

![Reversi Game Part 1](/../main/images/lab6_sample_game_1.png)

![Reversi Game Part 2](/../main/images/lab6_sample_game_2.png)
 

    
