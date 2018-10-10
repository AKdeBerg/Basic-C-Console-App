/***********************************************************
 * Write a program that prompts the user to enter two dates
and then indicates which date comes earlier on the calendar:
	Enter first date(mm/dd/yy): 3/6/08
	Enter second date(mm/dd/yy): 5/17/07
5/17/07 is earlier than  3/6/08
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>

int main()
{

    //This program designed for 21st century only
    int month, day, year, month_2nd, day_2nd, year_2nd ;

    double equivalent_months_1st, equivalent_months_2nd ;

    printf("Enter first date(mm/dd/yy): ") ;
    scanf("%d/%d/%d", &month, &day, &year) ;

    equivalent_months_1st = month + (day / 30.00) + (2000 + year ) * 12 ; //converting the whole date into month

    printf("Enter second date(mm/dd/yy): ") ;
    scanf("%d/%d/%d", &month_2nd, &day_2nd, &year_2nd) ;

    equivalent_months_2nd = month_2nd + (day_2nd / 30.00) + (2000 + year_2nd) * 12 ; //converting the whole date into month

    if(equivalent_months_1st < equivalent_months_2nd)
    {
        printf("\n\n%d/%d/%.2d is earlier than %d/%d/%.2d", month, day, year, month_2nd, day_2nd, year_2nd) ;
    }
    else
        printf("\n\n%d/%d/%.2d is earlier than %d/%d/%.2d",month_2nd, day_2nd, year_2nd,month, day, year) ;


    printf("\n\n") ;
}
