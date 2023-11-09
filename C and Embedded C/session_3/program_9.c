#include <stdio.h>
#include <stdbool.h>
int main()
{
    /*
    number of digit of enter number
    */
    int number ;
    int counter;
    int n;
    printf("Please enter number:");
    scanf("%i", &number);
    n = number ;
    while(n > 0)
    {
        n = n/10;
        counter++;
    }
    printf("number %i have  %i digit \n", number, counter);
    return 0 ;
}
