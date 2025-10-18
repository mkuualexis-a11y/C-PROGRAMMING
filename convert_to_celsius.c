/*
Name:Alex Mwangi
Reg:CT101/G/26432/25
Description:Convert to celsius
*/

#include <stdio.h>

float fahrenheit_to_celsius(float fahrenheit);

void main()
{
	float fahrenheit, celsius;
	
	printf("Enter the temperature in fahrenheit(F):\n");
	scanf("%f",&fahrenheit);
	
	celsius =fahrenheit_to_celsius(fahrenheit);
	printf("The temperature in celsius =%.2f>\n",celsius);
	
	return 0;
	
	}
	
	float fahrenheit_to_celsius (float fahrenheit)
	{
		float celsius;
		celsius = (fahrenheit - 32) * 5.0/9.0;
	
	return celsius;
	
	}