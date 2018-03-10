/* Program to convert temperature from Celcius to Fahrenheit
	F =(9/5) C + 32 
	Renge C: 300 to 0 	*/

#include <stdio.h>

void main()
{
	float fahr;
	float cel;
	float lower = 0;
	float upper = 300;
	float step = 20;
	
	printf("Celcius\t Fahrenheit\n");
	for(cel = upper; cel >= lower; cel-=step)
	{
		fahr = (5.0/9.0) * cel + 32.0;
		printf("%7.0f\t %9.1f\n",cel,fahr);
	}
}

