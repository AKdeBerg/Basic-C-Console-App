/***********************************************************
 * Write a C program that asks the user to enter the numbers from 1 
to 16(in any order) and then displays the numbers in 4 by 4 arrangement, followed by the sums of the rows, coloumns and diagonals.
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,r_sum1,r_sum2,r_sum3,r_sum4,c_sum1,c_sum2,c_sum3,c_sum4,d_sum ;

    printf("Enter the numbers from 1 to 16 in any order: ") ;

    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p) ;

    printf("%2d %2d %2d %2d \n%2d %2d %2d %2d \n%2d %2d %2d %2d \n%2d %2d %2d %2d \n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p) ;

    r_sum1 = a+b+c+d ;

    r_sum2 = e+f+g+h ;

    r_sum3 = i+j+k+l ;

    r_sum4 = m+n+o+p ;

    printf("Row Sums: %d %d %d %d\n",r_sum1,r_sum2,r_sum3,r_sum4) ;

    c_sum1 = a+e+i+m ;

    c_sum2 = b+f+j+n ;

    c_sum3 = c+g+k+o ;

    c_sum4 = d+h+l+p ;

    printf("Coloumn Sums: %d %d %d %d\n",c_sum1,c_sum2,c_sum3,c_sum4) ;

    d_sum = a+f+k+p ;

    printf("Diagonal Sums: %d\n",d_sum) ;

}
