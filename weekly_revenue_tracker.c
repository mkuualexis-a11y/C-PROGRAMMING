/*
Name:Alex Mwangi
Reg no:CT101/G/26432/25
Description:weekly revenue tracker
*/

#include <stdio.h>

int main()
{
float revenue[7];
float total_revenue =0.0f;
float average_revenue =0.0f;

int i;

 printf("Enter the daily revenue for each day:\n");

for	(i=0; i<7; i++){
	printf("Day %ds:",i+1);
	scanf("%f \d",&revenue[i]);
	total_revenue += revenue[i];
}
average_revenue = total_revenue /7.0f;

printf("The total weekly income:ksh %.2f\n",total_revenue);
printf("The average daily revenue:ksh %.2f\n",average_revenue);

	return 0;
}
