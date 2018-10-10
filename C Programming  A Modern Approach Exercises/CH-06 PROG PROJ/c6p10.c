/***********************************************************
 * Programming project 9 in chapter 5 asked you to write a 
program that determines which of two dates come earlier on the 
calendar. Generalize the program so that the user may enter
any number of dates. The user will enter 0/0/0 to indicate that
no more date will be entered:
	Enter date(mm/dd/yy): 3/6/08
	Enter date(mm/dd/yy): 5/17/07
	Enter date(mm/dd/yy): 6/3/07
	Enter date(mm/dd/yy): 0/0/0
    5/17/07 is earliest date.
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>

int main() 
{
	int mm, dd, yy, earlyMM, earlyDD, earlyYY ;
	double equivalentMonth, earliest ;

	printf("Enter a date(mm/dd/yy): ") ;
	scanf("%d/%d/%d", &mm, &dd, &yy) ;

	equivalentMonth = mm + (dd/30.00) + yy * 12 ;

	earliest = equivalentMonth ;
	earlyMM = mm ;
	earlyDD = dd ;
	earlyYY = yy ;
	
	while(equivalentMonth != 0) {

	 printf("Enter a date(mm/dd/yy): ") ;
	 scanf("%d/%d/%d", &mm, &dd, &yy) ;

	 equivalentMonth = mm + (dd/30.00) + yy * 12 ;

		if(equivalentMonth < earliest && equivalentMonth != 0) {
		 
		 earliest = equivalentMonth ;
		 earlyMM = mm ;
		 earlyDD = dd ;
		 earlyYY = yy ;

		}
	}

	printf("%d/%d/%.2d is the earliest date\n", earlyMM, earlyDD, earlyYY) ;
}
