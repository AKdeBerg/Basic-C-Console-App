/***********************************************************
 * European countries use a 13-digit code, known as a EAN instead
of the 12-digit UPC found in Northa America.Each EAN ends with
a check digit,just as UPC does. THe techniques for calculating the 
check digit is also similiar.Write a program for it:
     Enter the first 12 digits of a EAN: 869148426000
     Check digit: 8
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>
#include<stdint.h>
int main()
{
	long long ean ; //You must have to use a 64 bit processor to execute this program. Executing on 32 bit processor won't give exact result.
	int  one, two, thr, four, five, six, seven, eight, nine, ten, eleven,twelve,odd_total,even_total,total,ul_odd_total,check_digit ;
	printf("Enter your EAN code here: ") ;
	scanf("%lld", &ean) ;
	printf("\n") ;

	one = ean % 10 ;
	ean /= 10 ;

	two = ean % 10 ;
	ean /= 10 ;

	thr = ean % 10 ;
	ean /= 10 ;

	four = ean % 10 ;
	ean /=10 ;

	five = ean % 10 ;
	ean /= 10 ;

	six = ean % 10 ;
	ean /= 10 ;

	seven = ean % 10 ;
	ean /= 10 ;

	eight = ean % 10 ;
	ean /= 10 ;

	nine = ean % 10 ;
	ean /= 10 ;

	ten = ean % 10 ;
	ean /= 10 ;

	eleven = ean % 10 ;
	ean /= 10 ;

    twelve = ean % 10 ;
    ean /= 10 ;

	odd_total = one + thr +five + seven + nine + eleven ;
	even_total =  two + four + six + eight + ten + twelve ;

	ul_odd_total = odd_total * 3 ;
	
	total = ul_odd_total + even_total ;
	check_digit = 9 - ((total - 1) % 10) ;

	printf("Check digit: %d\n", check_digit) ;

}
