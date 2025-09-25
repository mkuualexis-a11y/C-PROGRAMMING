/*
name:ALEX MAINA MWANGI
REG:CT101/G/26432/25
DESCRIPTION:QUALIFICATION FOR A LOAN
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int age;
	int income;
	
	//user input
printf("kindly input your age: ");
scanf("%d",& age);
printf("we kindly request your annual income in ksh:");
scanf("%d, & income");

//conditions
if(age >=21 & income >=21000) {
	printf("congratulations you qualify for loan");
}else {
	printf("unfortunately,we are unable to offer you a loan at this time");
}
	return 0;
}