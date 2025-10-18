/*
Name:Alex Mwangi
Reg:CT101/G/26432/25
Description:Function to calculate fare
*/
#include <stdio.h>
#include <math.h>

float calculatefare(float distance); // function prototype

void main()
{
	float fare,distance;
	
	printf("Enter distance (in kilometers) covered:\n");
	scanf("%f",&distance);
	
	//function call
	fare = distance * 50;
	
	//  function declaration
	{
        printf("The total fare is =ksh.%.2f\n",fare);
	}
	return 0;

}