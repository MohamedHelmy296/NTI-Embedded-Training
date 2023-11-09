#include <stdio.h>
#include <stdbool.h>
int main()
{
    /*
    sum of odd number
    */
    int number ;
    int i ;
    int sum = 0;

    printf("please enter number:");
    scanf("%i",&number);
    while(number > 0 )
    {
        if((number%2)!=0)
        {
            sum+=number;
        }
        number--;
    }
    printf("sum of odd number in %i is : %i",number,sum);

    return 0 ;
}
