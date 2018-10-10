/***********************************************************

 * Write a program that calculates the remaining balance on a
   loan after the first, second, and third monthly payments:

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
    printf("Enter amount of Loan: ") ;
    scanf("%f", &balance) ;

    printf("Enter interest rate: ") ;
    scanf("%f", &annualInterestRate) ;

    printf("Enter monthly payment: ") ;
    scanf("%f", &monthlyPayment) ;

    /**************************************************************
    *Notice the interest given as annual, we need to convert it to
    *to percentage interest rate and then make it monthly.
    *So firstly we divide the interest rate by 100 to convert it
    *in percentage and then divide it by 12 to get the
    *monthly interest rate.
    ************************************************************/
    monthlyInterestRate = (annualInterestRate/100)/12 ;

    //For first month
    increasedBalance = balance + (balance * monthlyInterestRate) ;
    finalBalance = increasedBalance - monthlyPayment ;
    printf("Balance remaining after the 1st payment: %0.2f\n\n", finalBalance ) ;

    //For second month
    increasedBalance = finalBalance + (finalBalance * monthlyInterestRate) ;
    finalBalance = increasedBalance - monthlyPayment ;
    printf("Balance remaining after the 2nd payment: %0.2f\n\n", finalBalance ) ;

    //For third month
    increasedBalance = finalBalance + (finalBalance * monthlyInterestRate) ;
    finalBalance = increasedBalance - monthlyPayment ;
    printf("Balance remaining after the 3rd payment: %0.2f\n\n", finalBalance ) ;
}
