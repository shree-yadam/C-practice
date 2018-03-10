/* Program to convert temperature from Fahrenheit to Celcius using function
	C = (5/9)(F-32)
	Renge F: 0 to 300 	*/

#include <stdio.h>

float fahr_to_cel(float fahr)
{
	return ((5.0/9.0)*(fahr - 32.0));
}

float cel_to_fahr(float cel)
{
	return (9.0*cel/5.0 + 32.0);
}

void main()
{
	float fahr1, fahr2;
	float cel;
	float lower = 0;
	float upper = 300;
	float step = 20;
	
	printf("Fahrenheit\t Celcius\t Fahrenheit\n");
	for(fahr1 = lower; fahr1 <= upper; fahr1+=step)
	{
		cel = fahr_to_cel(fahr1);
		fahr2 = cel_to_fahr(cel); 
		printf("%10.0f\t %6.2f\t %10.0f\n",fahr1,cel, fahr2);
	}
}

