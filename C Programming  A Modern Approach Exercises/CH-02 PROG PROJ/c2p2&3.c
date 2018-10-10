/***********************************************************

 *Proj No2: Write a C program that computes the volume of a
  sphere with a 10-meter radius, using the formula v = 4/3πR3.

 *Proj No3: Modify the program of Programming Project 2 so
  that it prompt the user to enter the radius of the sphere.

 * This Program Done by iceBerg.
 * twitter.com/AKdeBerg

************************************************************/




#include<stdio.h>
#define PI 3.14
#define FRAC_PART (4.0f/3.0f)

                                /*****************************
                                * It's a good practice to write
                                * 4.0f rather than 4.0 alone ;
                                * floating point value should be write in this way
                                ***************************************************/


int main()
{

    float radius, volume ;

    printf("Enter the radius of the sphere: ") ;

    scanf("%f", &radius) ;

    printf("\n\n") ;

    volume = FRAC_PART * PI * radius * radius * radius ;

    printf("THE VOLUME OF THIS SPHERE IS: %0.2f\n\n\n", volume) ;

}
