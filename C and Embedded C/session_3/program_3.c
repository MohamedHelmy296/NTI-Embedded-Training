#include <stdio.h>
int main()
{
    /*
    program to find sum of
    */
    int number;
    int i ;
    int sum = 0 ;
    printf("Please enter the number:");
    scanf("%i",&number);
    for(i=number ; i >=0 ; i-- )
    {
        sum = sum + i ;
    }
    printf("the sum of the %d",sum);

    return 0 ;
}
