#include <stdio.h>
int main ()
{
    int id ;
    int score;
    char address;
    printf("This program to use if and else if and else \n");
    printf("please enter your id:");
    scanf(" %i", &id);
    if (id == 100)
    {
        printf("please enter your score \n");
        scanf(" %i", &score);
        if(score <= 50)
        {
            printf("please enter your address \n");
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
