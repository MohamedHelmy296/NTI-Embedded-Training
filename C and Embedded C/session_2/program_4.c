#include <stdio.h>
int main ()
{
    printf("Program for analysis of people of certain age groups with salary \n"
           "Who is eligible for getting a suitable loan in banking system\n"
           "if their condition and norms get satisfied using nested if statement.\n"
           "Age<18 illegal (>18,<50 for salary >3000) accept--->50 illegal\n"
           "Show details for the user in weakness point \n \n");

    int age ;
    float salary ;
    printf("Please enter your age: \n");
    scanf(" %i", &age);
    if( age > 18)
    {
        if (age < 50)
        {
            printf("enter your salary : \n");
            scanf(" %f", &salary);
            if (salary > 3000)
            {
                printf("your are accpeted \n");
            }
            else
            {
                printf("your salary less than 3000 you can't loan \n");
            }
        }
        else
        {
            printf("your age is bigger than 50 you can't pay your loan \n");

        }
    }
    else
    {
        printf("your age is less than 18 so you are illegal \n");
    }
    return 0 ;
}
