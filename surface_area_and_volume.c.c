/*
Name:ALEX MAINA MWANGI
REG:CT101/G/26432/25
DESCRIPTION:FINDING S.A AND VOLUME
surface_area = 2*M_PI*r*r+2*M_PI*r*h
volume = M_PI*r*r*h
*/
#include <stdio.h>
#include <math.h>

int main()
{
	double r,h,surface_area, volume;
	printf("input length:");
	scanf("%lf",&r);
	
	printf(" input height: ");
	scanf("%lf",&h);
	
	surface_area = 2*M_PI*r*r*h+2*M_PI*r*h;
	volume = M_PI*r*r*h;
	
	printf("surface_area of cylinder = %.2f\n", volume);
	printf("The volume of cylinder =%.2f\n", volume);
	return 0;
}
