//  Write a program that asks for 2 numbers and shows the sum.
//

#include <stdio.h>


int main()
{


	int number01 = 0;
	int number02 = 0;


	printf("introduce numero: ");
	scanf_s("%i", &number01);


	printf("introduce number two: ");
	scanf_s("%i", &number02);


	printf("%i * %i = %i\n", number01, number02, number01 + number02);



	return 0;
}
