
#include<stdio.h>

int main()	{

	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("   Fahrenheit | Celsius\n", fahr, celsius);

	while (fahr <= upper)	{
		celsius = 5 * (fahr-32) / 9;
		printf("\t%d\t  %d\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}

