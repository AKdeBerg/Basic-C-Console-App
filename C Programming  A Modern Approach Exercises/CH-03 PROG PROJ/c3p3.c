/***********************************************************
 * Write a C program that breaks down an ISBN entered by the
users:
     Enter ISBN: 978-0-393-97950-3
     GSI prefix:978
     Group Identifire: 0
     Publisher Code: 393
     Item Number: 97950
     Check Digit: 3
 *
 *
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/

#include<stdio.h>

int main()
{
    int gsi, group, publisher, item, check_digit ;

    printf("Enter ISBN: ") ;

    scanf("%d-%d-%d-%d-%d", &gsi,&group,&publisher,&item,&check_digit) ;

    printf("GSI prefix: %d\n", gsi) ;

    printf("Group identifier: %d\n", group) ;

    printf("Publisher code: %d\n", publisher) ;

    printf("Item number: %d\n", item) ;

    printf("Check digit: %d\n", check_digit) ;


    /* The five printf calls can be combined as follows:

     printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",
            gsi, group, publisher, item, check_digit);
    */
}
