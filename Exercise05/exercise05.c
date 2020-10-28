/* Write a program that ask for an age and computes the number of pulses a person should have after 10 seconds of training.
   pulses = (220 - age)/10;
*/

#include<stdio.h>

int main()
{
	int age = 0;
	int pulses = 0;

	printf("Introduce an age:  ");
	scanf_s("%i", &age);

	pulses = (220 - age) / 10;

	printf("This person should have this number of pulses:  %i", pulses);

	return 0;

}
