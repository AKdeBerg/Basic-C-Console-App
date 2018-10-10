/***********************************************************
 * Departure Time    Arrival Time
	8:00 am				10:16 am
	9:43 am				11:52 am
	11:19 am			1:31 pm
	12:47 pm			3:00 pm
	2:00 pm 			4:08 pm
	3:45 pm 			5:55 pm
	7:00 pm 			9:20 pm
	9:45 pm 			11:58 pm

   Write a program that asks user to enter a time(in 24 hour clock). The
program then displays the departure and arrival times for the flight whose
departure time is closest to that entered by the user:

	Enter a 24-hour time: 13:15
	Closest departure time is 12:47 pm, arrival at 3:00 pm

 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/

#include<stdio.h>

int main()
{
	int hour, min,        inputTimeInMinute,    firstDeparture, secondDeparture, 
	    thirdDeparture,   fourthDeparture,      fifthDeparture, sixthDeparture, 
		seventhDeparture, eighthDeparture ;

	float midPointBetween1stAND2ndFlight, midPointBetween2ndAND3rdFlight,
	 	  midPointBetween3rdAND4thFlight, midPointBetween4thAND5thFlight, 
	 	  midPointBetween5thAND6thFlight, midPointBetween6thAND7thFlight, 
	 	  midPointBetween7thAND8thFlight;

    printf("Enter a 24-hour time: ") ;
	scanf("%d:%d", &hour, &min) ;

	inputTimeInMinute = hour * 60 + min ;

	//Converting all departure flight time in minutes
	firstDeparture = 8 * 60 ;

	secondDeparture = 9 * 60 + 43 ;

	thirdDeparture = 11 * 60 + 19 ;

	fourthDeparture = 12 * 60 + 47 ;

	fifthDeparture = 14 * 60 ;

	sixthDeparture = 15 * 60 + 45 ;

	seventhDeparture = 19 * 60 ;

	eighthDeparture = 21 * 60 + 45 ;


	printf("Closest departure time is ") ;

	/*****
	 Calculating the difference between two consecutive departure time and then determining
	 the mid point of these number
	 *****/

	/**********************
	By mid point between any two flights,I mean the number which
	has equal difference between those consecutive departure time.

    *************************************************/

	midPointBetween1stAND2ndFlight = (secondDeparture - firstDeparture) / 2 + firstDeparture;

	midPointBetween2ndAND3rdFlight = (thirdDeparture - secondDeparture) / 2 + secondDeparture;

	midPointBetween3rdAND4thFlight = (fourthDeparture - thirdDeparture) / 2 + thirdDeparture;

	midPointBetween4thAND5thFlight = (fifthDeparture - fourthDeparture) / 2 + fourthDeparture;

	midPointBetween5thAND6thFlight = (sixthDeparture - fifthDeparture) / 2 + fifthDeparture;

	midPointBetween6thAND7thFlight = (seventhDeparture - sixthDeparture) / 2 + sixthDeparture;

	midPointBetween7thAND8thFlight = (eighthDeparture - seventhDeparture) / 2 + seventhDeparture;


	if(inputTimeInMinute <= midPointBetween1stAND2ndFlight)
		printf("8:00 AM, arriving at 10:16 AM\n") ;

	else if(inputTimeInMinute <= secondDeparture)
		printf("9:43 AM, arriving at 11:52 AM\n") ;

	else if(inputTimeInMinute <= midPointBetween2ndAND3rdFlight)
		printf("9:43 AM, arriving at 11:52 AM\n") ;

	else if(inputTimeInMinute<= thirdDeparture)
		printf("11:19 AM, arriving at 1:31 PM\n") ;

    else if (inputTimeInMinute <= midPointBetween3rdAND4thFlight)
		printf("11:19 AM, arriving at 1:31 PM\n") ;

	else if(inputTimeInMinute <= fourthDeparture)
		printf("12:47 PM, arriving at 3:00 PM\n") ;

	else if(inputTimeInMinute <= midPointBetween4thAND5thFlight)
		printf("12:47 PM, arriving at 3:00 PM\n") ;

	else if(inputTimeInMinute <= fifthDeparture)
		printf("2:00 PM, arriving at 4:08 PM\n") ;

	else if(inputTimeInMinute <= midPointBetween5thAND6thFlight)
		printf("2:00 PM, arriving at 4:08 PM\n") ;

	else if(inputTimeInMinute <= sixthDeparture)
		printf("3:45 PM, arriving at 5:55 PM\n") ;

	else if(inputTimeInMinute <= midPointBetween6thAND7thFlight)
		printf("3:45 PM, arriving at 5:55 PM\n") ;

	else if(inputTimeInMinute <= seventhDeparture)
		printf("7:00 PM, arriving at 9:20 PM\n") ;

	else if(inputTimeInMinute <= midPointBetween7thAND8thFlight)
		printf("7:00 PM, arriving at 9:20 PM\n") ;

	else
		printf("9:45 PM, arriving at 11:58 PM\n") ;
}
