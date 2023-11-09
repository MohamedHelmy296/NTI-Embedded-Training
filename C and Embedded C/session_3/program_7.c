#include <stdio.h>
#include <stdbool.h>
int main()
{
        /*
        multiplcation table use while
        */
        int mult = 0 ;
        int number;
        printf("Please enter number: ");
        scanf(" %i", &number);
        int i = 1 ;
        while (i <= 12 )
        {
            mult = number * i ;
            printf("%i * %i = %i \n",number,i,mult);
            i++;
        }
        return 0 ;
    }
