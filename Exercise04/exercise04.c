//Write a program that asks for 2 numbers and computes the mean.

#include<stdio.h>

int main()
{
	float number01 = 0;
	float number02 = 0;
	float mean = 0;

	printf("Introduce one number:  ");
	scanf_s("%f", &number01);

	printf("Introduce another number:  ");
	scanf_s("%f", &number02);

	mean = (number01 + number02) / 2;

	printf("The mean of %f + %f is %0.2f\n", number01, number02, mean);

	return 0;
}
