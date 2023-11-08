#include <stdio.h>
int main ()
{
    /*
    calculate program
    */
    char operator_;
    int num_1, num_2, result;
    printf("Please enter your operator : \n");
    scanf(" %c", &operator_ );
    printf("Please enter two numbers : \n");
    scanf(" %i %i", &num_1, &num_2);
    switch(operator_)
    {
    case '+':
    {
        result = num_1 + num_2;
        printf("%i %c %i = %i", num_1,operator_, num_2, result );
    }
    break ;

    case '-':
    {
        if (num_1 > num_2)
        {
            result = num_1 - num_2;
            printf("%i %c %i = %i", num_1,operator_, num_2, result );
        }
        else
        {
            result = num_2 - num_1;
            printf("%i %c %i = %i", num_2,operator_, num_1, result );
        }
    }
    break ;

    case '*':
    {
        if ((num_1&&num_2) == 1)
        {
            result = num_1 * num_2;
            printf("%i %c %i = %i", num_1,operator_, num_2, result );
        }
        else
        {
            printf(" invalid number \n");
        }

    }
    break ;
    case '/':
    {
        if ( num_1 > num_2)
        {
            if ( num_2 == 0 )
            {
                printf("error \n");
            }
            else
            {
                result = num_1 / num_2;
                printf("%i %c %i = %i", num_1,operator_, num_2, result );
            }

        }
        else
        {
            if ( num_1 == 0 )
            {
                printf("error \n");
            }
            else
            {
                result = num_2 / num_1;
                printf("%i %c %i = %i", num_2,operator_, num_1, result );
            }
        }
    }
    break ;
    case '%':
    {
        if ( num_1 > num_2)
        {
            if ( num_2 == 0 )
            {
                printf("error \n");
            }
            else
            {
                result = num_1 % num_2;
                printf("%i %c %i = %i", num_1,operator_, num_2, result );
            }

        }
        else
        {
            if ( num_1 == 0 )
            {
                printf("error \n");
            }
            else
            {
                result = num_2 % num_1;
                printf("%i %c %i = %i", num_2,operator_, num_1, result );
            }
        }
    }
    break ;

    default:
    {
        printf("invalid operation \n");
    }
    }
    return 0 ;
}
