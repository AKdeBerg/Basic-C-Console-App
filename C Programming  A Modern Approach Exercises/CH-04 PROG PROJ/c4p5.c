/***********************************************************
 * Rewrite the upc.c of section 4.1 so that the user enters
11 digits at one time, instead of entereing one digit, then five digits
and then another five digits:
     Enter the first 11 digits of a UPC: 01380015173
     Check digit: 5
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>
#include<stdint.h>
int main()
{
	int32_t upc ; //use int64_t if you have a 64 bit processor. This program has limitations on 32 bit processors.
	int  one, two, thr, four, five, six, seven, eight, nine, ten, eleven,odd_total,even_total,total,ul_odd_total,check_digit ;
	printf("Enter your UPC code here: ") ;
	scanf("%d", &upc) ;
	printf("\n") ;

	one = upc % 10 ;
	upc /= 10 ;

	two = upc % 10 ;
	upc /= 10 ;

	thr = upc % 10 ;
	upc /= 10 ;

	four = upc % 10 ;
	upc /=10 ;

	five = upc % 10 ;
	upc /= 10 ;

	six = upc % 10 ;
	upc /= 10 ;

	seven = upc % 10 ;
	upc /= 10 ;

	eight = upc % 10 ;
	upc /= 10 ;

	nine = upc % 10 ;
	upc /= 10 ;

	ten = upc % 10 ;
	upc /= 10 ;

	eleven = upc % 10 ;
	upc /= 10 ;

	odd_total = one + thr +five + seven + nine + eleven ;
	even_total =  two + four + six + eight + ten ;

	ul_odd_total = odd_total * 3 ;
	
	total = ul_odd_total + even_total ;
	check_digit = 9 - ((total - 1) % 10) ;

	printf("Check digit: %d\n", check_digit) ;

}
