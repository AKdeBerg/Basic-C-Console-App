/***********************************************************

 * Write a program that calculates the remaining balance on a
   loan after the first, second, and third monthly payments:
   Modify the program so that it also asks the user to enter
   the number of payments and then displays remaining 
   after each of  these payments.

    Enter amount of loan: 20000.00
    Enter interest rate: 6.0
    Enter monthly Payment: 386.66

    Balance remaining after first payment: $19713.34
    Balance remaining after second payment: $19425.25
    Balance remaining after third payment: $19135.71

 * This Program is Done by iceBerg.
 * twitter.com/AKdeBerg

************************************************************/

#include<stdio.h>
int main()
{
    float balance,annualInterestRate,monthlyPayment,monthlyInterestRate,increasedBalance,finalBalance ;
    int numberOfPayments ;
    printf("Enter amount of Loan: ") ;
    scanf("%f", &balance) ;

    printf("Enter interest rate: ") ;
    scanf("%f", &annualInterestRate) ;

    printf("Enter the number of payments: ") ;
    scanf("%d", &numberOfPayments) ;

    /**************************************************************
    *Notice the interest given as annual, we need to convert it to
    *to percentage interest rate and then make it monthly.
    *So firstly we divide the interest rate by 100 to convert it
    *in percentage and then divide it by 12 to get the
    *monthly interest rate.
    ************************************************************/
    monthlyInterestRate = (annualInterestRate/100)/12 ;
	
	int i ;
	for(i = 1; i <= numberOfPayments; i++) {
	printf("Enter monthly payment: ") ;
        scanf("%f", &monthlyPayment) ;

	increasedBalance = balance + (balance * monthlyInterestRate) ;
        finalBalance = increasedBalance - monthlyPayment ;

        printf("Remaining balance: %0.2f\n\n", finalBalance ) ;
	balance = finalBalance ;
   
       }
    
}
