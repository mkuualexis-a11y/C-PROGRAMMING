/*
Name:Alex Mwangi
Registration:CT101/G/26432/25
Description:water bills calculation
*/

#include <stdio.h>

int main()
{
	float units,total ;
	
	// user input
	printf("enter the units of consumed");
	scanf("%f",& units);
	
	//conditions
	if(units<=30){
		total = units * 20;
	}  
	else if (units <= 60){
		total = (30 * 25) + (units -30) * 25;
	} 
	else {
       total= (30 * 20) + (30 * 25) +s(units - 60) * 30;
	}
	
printf("total bills: %2f ksh\n",total);
	
	
	return 0;
}
