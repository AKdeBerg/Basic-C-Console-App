/***********************************************************
 * Write a C program that prompts the user to enter a telephone
number in the form (xxx) xxx-xxxx and then displays the number
in the form xxx.xxx.xxx:
     Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
     You entered 404.817.6900
 *
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>

int main()

{
    int code,xxx,xxxx ;

    printf("Enter your phone number:[(xxx) xxx-xxxx]: ") ;

    scanf("(%d) %d-%d", &code,&xxx,&xxxx) ;

    printf("\n\n") ;

    printf("You entered: %d.%d.%d\n",code,xxx,xxxx) ;
}
