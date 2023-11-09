#include <stdio.h>
int main()
{
    /*
    muliplication of number
    */
    int number;
    int i ;
    int mult = 1;
    printf("Please enter number:");
    scanf(" %i", &number);
    if (number > 0 )
    {
        for(i=0; i<=12 ; i++)
        {
            mult = number * i;
            printf(" %i * %i = %i \n",number, i, mult);
        }
    }
    else
    {
        printf("invalid number \n");
    }
    return 0 ;
}
