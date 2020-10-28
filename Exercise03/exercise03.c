
// Write a program that asks for 2 numbers and shows its sum, multiplication, substraction and division. 
//

#include <stdio.h>

int main()
{
    int number01 = 0;
    int number02 = 0;

    printf("introduce a number:   ");
    scanf_s("%i", &number01);

    printf("introduce another number:  ");
    scanf_s("%i", &number02);

    printf("%i + %i = %i\n", number01, number02, number01 + number02);

    printf("%i * %i = %i\n", number01, number02, number01 * number02);

    printf("%i / %i = %i\n", number01, number02, number01 / number02);

    printf("%i - %i = %i\n", number01, number02, number01 - number02);




    return 0;
}


