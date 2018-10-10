#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COL 10
#define ROW 10

int main(void)
{
   int col;
   int direction;
   int i;
   int j;
   int row;
   int timesBlocked = 0;

   char matrix[ROW][COL];
   char trappedLetter;

   _Bool isTrapped = false;

   // create a 10x10 matrix populated with the '.' (period) character.
   for (i = 0; i < ROW; i++) {
      for (j = 0; j < COL; j++) {
         matrix[i][j] = '.';
      }
   }

   // pick a random starting cell in the matrix
   srand((unsigned) time(NULL));
   row = rand() % ROW;
   col = rand() % COL;

   // put letter 'A' in the starting cell
   matrix[row][col] = 'A';

   // Repeat for letters 'B' to 'Z'
   for (i = 'B'; i <= 'Z'; i++) {

      // pick a random direction (0 = North, 1 = South, 2 = East, 3 = West)
      direction = ((rand() % ROW) % 4); 

      // put the letter in the adjoining cell of the given direction if the
      // cell is available (not out of bounds and not occupied by a letter). 
      switch(direction) {
         case 0: // North is the direction. 
            if ((row - 1  >= 0) && (matrix[row - 1][col] == '.')) {
               matrix[--row][col] = i; // North is open
               printf("North: %c North to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
               matrix[++row][col] = i; // South is open
               printf("North: %c South to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
            
            if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
               matrix[row][++col] = i; // East is open
               printf("North: %c East to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((col - 1 >= 0) && (matrix[row][col - 1] == '.')) {
               matrix[row][--col] = i; // West is open
               printf("North: %c West to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            break;

         case 1: // South is the direction
            if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
               matrix[++row][col] = i; // South is open
               printf("South: %c South to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row - 1  >= 0) && (matrix[row - 1][col] == '.')) {
               matrix[--row][col] = i; // North is open
               printf("South: %c North to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
               matrix[row][++col] = i; // East is open
               printf("South: %c East to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
 
            if ((col - 1 >= 0) && (matrix[row][col - 1] == '.')) {
               matrix[row][--col] = i; // West is open
               printf("South: %c West to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
 
            break;

         case 2: // East is the direction
            if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
               matrix[row][++col] = i; // East is open
               printf(" East: %c East to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
 
            if ((col - 1 >= 0) && (matrix[row][col - 1] == '.')) {
               matrix[row][--col] = i; // West is open
               printf(" East: %c West to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row - 1  >= 0) && (matrix[row - 1][col] == '.')) {
               matrix[--row][col] = i; // North is open
               printf(" East: %c North to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
               matrix[++row][col] = i; // South is open
               printf(" East: %c South to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
 
            break;

         case 3: // West is the direction
            if ((col - 1 >= 0) && (matrix[row][col - 1] == '.')) {
               matrix[row][--col] = i; // West is open
               printf(" West: %c West to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
               matrix[row][++col] = i; // East is open
               printf(" West: %c East to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row - 1  >= 0) && (matrix[row - 1][col] == '.')) {
               matrix[--row][col] = i; // North is open
               printf(" West: %c North to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
               matrix[++row][col] = i; // South is open
               printf(" West: %c South to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
 
            break;

      } // end switch

      if (timesBlocked == 4) {  // letter is blocked on all four sides
         isTrapped = true;
         trappedLetter = --i;
         break;                 // exit the for loop
      } 

      timesBlocked = 0;         // letter found a home. Clear the counter for next letter.

   } // end for

   // display the 10x10 matrix
   printf("\n");

   for (i = 0; i < ROW; i++) {
      for (j = 0; j < COL; j++) {
         printf("%c ", matrix[i][j]);
      }
      printf("\n");
   }

   if (isTrapped)
      printf("\nThe letter %c got trapped!\n", trappedLetter);
   else
      printf("\nCompleted 'A' through 'Z'\n");

   return 0;
}