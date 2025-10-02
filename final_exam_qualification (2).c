/*
name:ALEX MAINA MWANGI
REGISTRATION:CT101/G/26432/25
DESCRIPTION:FINAL EXAM QUALIFICATION
*/

#include <stdio.h>

int main()
{
	int attendance;
	int average_marks;
	
	//user input
printf("my attendance in percentage: ");
scanf("%d",& attendance);
printf("my average_marks:");
scanf("%d", & average_marks);

//conditions
if(attendance >=75 & average_marks>=40) {
	printf("your eligible for the exam");
}else {
	printf(" your are not eligible for the final exam");
}
	return 0;
}