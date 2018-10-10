/***********************************************************
 * Modify the broker.c program of Section 5.2 by making
   both of the following changes:
   a. Ask the user to enter the number of shares and the
      price per share, instead of the value of the trade.
   b. Add statements that compute the commission charged by
      a rival broker ($33 plus 3 cents per share for fewer
      than 2000 shares; $33 plus 2 cents per share for 2000
      shares or more. Display the rival's commission as well
      as the commission charged by the original broker.
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>
int main()
{
	float orginalBrokerCommission, rivalBrokerCommission, price, value, share ;
	printf("Enter share & price: ") ;
	scanf("%f %f", &share, &price) ;

	value = share * price ;

	if (value < 2500.00f)
	{
		orginalBrokerCommission = 30.00f + .017f * value ;
	}
	else if (value < 6250.00f)
	{
		orginalBrokerCommission = 56.00f + .0066f * value ;
	}
	else if( value < 20000.00f)
	{
		orginalBrokerCommission = 76.00f + .0034f * value ;
	}
	else if(value < 50000.00f)
	{
		orginalBrokerCommission = 100.00f + .0022f * value ;
	}
	else
	{
		orginalBrokerCommission = 255.00f + .0009f * value ;
	}

    //Default commission 

	if (orginalBrokerCommission < 39.00f)
		orginalBrokerCommission = 39.00f ;


	printf("Commission for original broke: $%.2f\n", orginalBrokerCommission) ;


	if (share < 2000.00f)
	{
		rivalBrokerCommission = 33.00f + .03 * share ;
	}

	else
	{
		rivalBrokerCommission = 33.00f + 0.2 * share ;
	}

	printf("Commission for rival broker: $%.2f\n", rivalBrokerCommission) ;

}
