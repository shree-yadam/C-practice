/* Temperature conversion celcius to fahrenheit program with heading above table */

#include <stdio.h>

int main()
{
	float fahr, celcius;
	int lower, upper, step;
	
	lower = 0.0;
	upper = 300.0;
	step = 20;

	celcius = lower;
	printf("CELCIUS\t FAHRENHEIT\n");
	while(celcius <= upper)
	{
		fahr = (9/5.0)*celcius + 32.0;
		printf("%7.0f \t%10.1f\n",celcius,fahr);
		celcius = celcius + step;
	}
	return 0;
}
