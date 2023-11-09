#include <stdio.h>
#include <stdbool.h>
int main()
{
    /*
    program prints primary number
    */
    int number;
    int i ;
    bool primary = true;
    printf("please enter number:");
    scanf(" %i", &number);
    if (number <= 0)
    {
        printf("number %i is not primary \n", number);
    }
    else if (number == 2)
    {
        printf("number %i is primary \n",number);
    }
    else if  (number == 1)
    {
        printf("number %i is not primary \n", number);
    }
    else
{
    for(i=2; i<number; i++)
        {
            if(number %i ==0)
            {
                primary = false ;
                break;
            }
        }
        if (primary == true)
        {
            printf("number %i is primary \n",number);

        }
        else
        {
            printf("number %i is not primary \n",number);
        }
}

        return 0 ;
    }
