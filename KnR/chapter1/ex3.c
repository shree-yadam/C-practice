/* Tempeeature conversion fahrenheit to celcius program with heading above table */

#include <stdio.h>

int main()
{
	float fahr, celcius;
	int lower, upper, step;
	
	lower = 0.0;
	upper = 300.0;
	step = 20;

	fahr = lower;
	printf("FAHRENHEIT\t CELCIUS\n");
	while(fahr <= upper)
	{
		celcius = (5/9.0)*(fahr - 32);
		printf("%10.0f\t %7.1f\n",fahr,celcius);
		fahr = fahr + step;
	}
	return 0;
}
