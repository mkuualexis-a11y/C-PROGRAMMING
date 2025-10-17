/*
Name:Alex Mwangi
Reg no:CT101/G/26432/25
Description:Calculating Electric Bill
*/

#include <stdio.h>

void main()
{
	float units,total;
	
	printf("Enter number of units consumed:\n");
	scanf("%f", &units);
	
	if(units<=100){
		total = units * 20;
		
	}
	else if (units<=200){
	total = (100 * 10) + (units - 100) * 15;
			
	}
	else {
		total =(100 * 10) + (100 * 15) + (units - 200) * 20;
		
	}
	
	printf("total bills = KES %.f\n",total);
	
	return 0;
}