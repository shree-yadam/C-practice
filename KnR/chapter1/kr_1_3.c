/* Program to convert temperature from Fahrenheit to Celcius
	C = (5/9)(F-32)
	Renge F: 0 to 300 	*/

#include <stdio.h>

void main()
{
	float fahr;
	float cel;
	float lower = 0;
	float upper = 300;
	float step = 20;
	
	printf("Fahrenheit\t Celcius\n");
	for(fahr = lower; fahr <= upper; fahr+=step)
	{
		cel = (5.0/9.0) * (fahr - 32.0);
		printf("%10.0f\t %6.2f\n",fahr,cel);
	}
}

