/***********************************************************
 * Write a C program that formats product information entered
   by the user. A session with the program look like this:

     Enter item number: 583
     Enter unit price: 13.5
     Enter purchase date (mm/dd/yyyy): 10/24/2010

     Item	Unit	 Purchase
            Price    Date
     583    $  13.50 10/24/2010
 *
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/


#include<stdio.h>
int main()
{
    int item, mm,dd,yyyy ;
    float price ;
    printf("Enter item number: ") ;
    scanf("%d", &item) ;

    printf("Enter unit price: ") ;
    scanf("%f", &price) ;

    printf("Enter purchase date(mm/dd/yyyy): ") ;
    scanf("%d/%d/%d", &mm,&dd,&yyyy) ;
    printf("\n\n") ;

    printf("Item\tUnit      \tPurchase \n") ;
    printf("    \tprice     \tDate\n") ;
    printf("%d  \t$%-7.2f   \t%.2d/%.2d/%d\n\n",item,price,mm,dd,yyyy) ;
}
