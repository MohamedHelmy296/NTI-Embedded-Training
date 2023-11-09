#include <stdio.h>
int main()
{
    /*
    program to accept number n then countdown from number n to 0 and print on screen
    */
    int number ;
    int i;
    printf("Please enter the number:");
    scanf(" %i", &number);
    printf("countdown from number:",number);
    if (number > 0)
    {
        for (i=number; i>=0; i--)
        {
            printf("%i \n",i);
        }
    }
    else
    {
        for(i= number; i<=0; i++)
        {
            printf("%i \n",i);
        }

    }
    return 0 ;
}
