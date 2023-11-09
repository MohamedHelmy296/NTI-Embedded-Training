#include <stdio.h>
int main()
{
    /*
    This program prints the factorial of  the number
    */
    int number;
    long int factorial = 1;
    int counter ;
    printf ("Please Enter the number: ");
    scanf("%i", &number);
    for (counter =1; counter <= number; counter++)
    {
        factorial = factorial*counter;
    }
    printf("the factorial of %i = %i", number , factorial);

    return 0 ;
}
