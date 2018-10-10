/***********************************************************
 * Write a program that asks the user for a two-digit number,
then prints the English word for the number:
	Enter a two-digit number: 45
	You entered the number: forty-five.
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/

#include<stdio.h>

int main()
{
    int  number, ten_s_Digit, one_s_Digit ;
    printf("Enter a two-digit number: ") ;
    scanf("%d",  &number) ;

    printf("You entered the number: ") ;

	ten_s_Digit = number / 10 ;

    one_s_Digit = number % 10 ;

    if(ten_s_Digit == 1)
     {
		if(one_s_Digit==1)
			printf("eleven\n") ;         //Replace this cascaded if statements with switch statement.......
		else if (one_s_Digit==2)
			printf("twelve\n") ;
		else if (one_s_Digit==3)
			printf("thirteen\n") ;
		else if (one_s_Digit==4)
			printf("fourteen\n") ;
		else if (one_s_Digit==5)
			printf("fifteen\n") ;
		else if (one_s_Digit==6)
			printf("sixteen\n") ;
		else if (one_s_Digit==7)
			printf("seventeen\n") ;
		else if (one_s_Digit==8)
			printf("eighteen\n") ;
		else
			printf("twenty\n") ;
     } 


    else
    {
        

        switch(ten_s_Digit)
        {
            case 2: printf("twenty") ;       break ;
            case 3: printf("thirty") ;     break ;
            case 4: printf("forty")  ;        break ;
            case 5: printf("fifty")  ;     break ;
            case 6: printf("sixty")  ;        break ;
            case 7: printf("seventy");     break ;
            case 8: printf("eighty") ;        break ;
            case 9: printf("ninety") ;     break ;
        }
        switch(one_s_Digit)
        {
            case 0: printf("\n"); break ;
            case 1: printf("-one\n"); break ;
            case 2: printf("-two\n"); break ;
            case 3: printf("-three\n"); break ;
            case 4: printf("-four\n"); break ;
            case 5: printf("-five\n") ; break ;
            case 6: printf("-six\n") ; break ;
            case 7: printf("-seven\n") ; break ;
            case 8: printf("-eight\n") ; break ;
            case 9: printf("-nine\n") ; break ;
        }
    }

}
