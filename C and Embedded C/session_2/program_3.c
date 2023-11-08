#include <stdio.h>
int main ()
{
    /* This program to use if and else if and else */;
    int id ;
    int score;
    char address;
    printf("Please enter your id:");
    scanf(" %i", &id);
    if (id == 100)
    {
        printf("Please enter your score \n");
        scanf(" %i", &score);
        if(score <= 50)
        {
            printf("Please enter your address \n");
            scanf(" %c", &address);
            if(address == 'c')
            {
                printf("address is valid \n");
            }
            else
            {
                printf("address is invalid \n");
            }
        }
        else
        {
            printf("your score less than 50 \n");
        }
    }
    else
    {
        printf("invalid number");
    }

    return 0 ;
}
