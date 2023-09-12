# Lab 7: Reversi Game Part 2 - Playing Against Computer Program

This project is a continuation of the Lab 6 Reversi Game. Now there is a **computer algorithm** that the user plays against in a full game.

![Reversi Board](/../main/images/reversi-board-mini.png)

## Computer Algorithm
The computer program makes its moves following these rules:
+ It will make a move that results in the highest score (highest number of pieces gained)
+ If 2 or more squares on the board result in the same score, the computer chooses the position with the lower row
  + If there are 2 positions with the same score in the same row, the position with the lowest column is chosen
 
## Steps & Game Rules
+ **Step 1:**
  + User enters the (n x n) dimension of the board (a number <= 26)
+ **Step 2:**
  + Program asks user what colour the computer will play as
  + User inputs B or W (Black or White)
  + Black always plays first move
+ **Step 3:**
  + Wait for computer to play first move, or user will be prompted to
  + User inputs coordinate of position to place piece as:
    + (row)(col)
    + Ex: ab
+ **Step 4:**
  + Play until no more valid moves are available or if user or computer wins
  + If player makes invalid move they lose the game
 
## Example Game Output:

  ![Gameplay part 1](/../main/images/lab7_p1.png)

  ![Gameplay part 2](/../main/images/lab7_p2.png)

  ![Gameplay part 3](/../main/images/lab7_p3.png)

  ![Gameplay part 4](/../main/images/lab7_p4.png)
