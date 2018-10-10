#include <stdio.h>
 
int main()
{
   int array[100], n, lowerBound, d, position, swap;
 
   printf("Enter number of elements: ");
   scanf("%d", &n);
 
   //Taking input of the numbers which to be sorted

   printf("Enter %d integers:\n", n);
   for ( lowerBound = 0 ; lowerBound < n ; lowerBound++ )
   {

      scanf("%d", &array[lowerBound]);  

   }


   for ( lowerBound = 0 ; lowerBound < ( n - 1 ) ; lowerBound++ )
   {
      position = lowerBound; //persumabley the lowest number's index is lowerBound

 	  //Now it's time to compare every value of array to find the real lowest number
      for ( d = lowerBound + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
         {
         	position = d; //storing the real lowest value's index in position variable
         }
            
      }

      /***********************************************************
      	******Now as we know the actual lowest number,
      ******we're going to change it's position.
      ********* Actually, we're going
      ****** to place the lowest value in the first 
      ******position of the array......
	 *******************************************************/
      if ( position != lowerBound )
      {

         swap = array[lowerBound];
         array[lowerBound] = array[position];
         array[position] = swap;
     
      }
   }

   printf("Sorted list in ascending order:\n");
 
   for ( lowerBound = 0 ; lowerBound < n ; lowerBound++ )
      printf("%d\n", array[lowerBound]);
 
   return 0;
}