#include <stdio.h>

int main() {

	int inputTimeInMinute, hour, min, i;
	printf("Enter a 24-hour time: ") ;
	scanf("%d:%d", &hour, &min) ;

	inputTimeInMinute = hour * 60 + min ;

	int departurTime[8] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19 , 12 * 60 + 47, 14 * 60, 
						  15 * 60 + 45, 19 * 60, 21 * 60 + 45};

    int arrivalTime[8]  = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 
                          17 * 60 + 55, 21 * 60 + 20, 11 * 60 + 58};
                         

    float midPoint[7] = {};

    for (i = 0; i < 6; ++i)
    {
        /* code */
        midPoint[i] = (departurTime[i+1] - departurTime[i]) / 2 + departurTime[i];
    }   

    printf("Closest departure time is ") ;
    for (i = 0; i < 8; ++i)
    {
    	/* code */
    	if (inputTimeInMinute <= midPoint[i])
    	{
    		
    		switch(i)
    		{
    			case 0: printf("8:00 AM, arriving at 10:16 AM\n") ; 
    					break; //This break statement will break out from the switch statement!
    			case 1: printf("9:43 AM, arriving at 11:52 AM\n") ;
    			 		break; //This break statement will break out from the switch statement!
    			case 2: printf("11:19 AM, arriving at 1:31 PM\n") ;
    					break; //This break statement will break out from the switch statement!
    			case 3: printf("12:47 PM, arriving at 3:00 PM\n") ;
    					break; //This break statement will break out from the switch statement!
    			case 4: printf("2:00 PM, arriving at 4:08 PM\n") ;  
    					break; //This break statement will break out from the switch statement!
    			case 5: printf("3:45 PM, arriving at 5:55 PM\n") ; 
    					break; //This break statement will break out from the switch statement!
    			case 6: printf("7:00 PM, arriving at 9:20 PM\n") ;  
    					break; //This break statement will break out from the switch statement!
    			case 7: printf("9:45 PM, arriving at 11:58 PM\n") ;
    				    break; //This break statement will break out from the switch statement! 
    		}
    		break;  //This break statement will break out from the if statement!
    		
    	}
    	else if (inputTimeInMinute <= departurTime[i+1])
    	{
    		/* code */
    		switch(i+1)
    		{
    			
    			case 1: printf("9:43 AM, arriving at 11:52 AM\n") ; 
    					break;
    			case 2: printf("11:19 AM, arriving at 1:31 PM\n") ; 
    					break;
    			case 3: printf("12:47 PM, arriving at 3:00 PM\n") ; 
    					break;
    			case 4: printf("2:00 PM, arriving at 4:08 PM\n") ;  
    					break;
    			case 5: printf("3:45 PM, arriving at 5:55 PM\n") ;  
    					break;
    			case 6: printf("7:00 PM, arriving at 9:20 PM\n") ;  
    					break;
    			case 7: printf("9:45 PM, arriving at 11:58 PM\n") ; 
    					break;
    		}
    	}
    }

}