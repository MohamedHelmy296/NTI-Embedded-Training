#include <stdio.h>
#include <stdbool.h>
int main()
{
    /*
    multiplcation table use do .. while
    */
    int mult = 0 ;
    int number;
    printf("Please enter number: ");
    scanf(" %i", &number);
    int i = 1 ;
    do
    {
        mult = number * i ;
        printf("%i * %i = %i \n",number,i,mult);
        i++;
    }
    while(i<=12);
    return 0 ;
}
