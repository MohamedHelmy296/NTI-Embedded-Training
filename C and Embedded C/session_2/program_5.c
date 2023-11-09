#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Program to accept three numbers and print the largest one on the screen.
    */
    int Number_One,Number_Two,Number_three;
    printf("Please Enter Number_One!\n");
    scanf(" %i", &Number_One);
    printf("Please Enter Number_Two!\n");
    scanf(" %i", &Number_Two);
    printf("Please Enter Number_three!\n");
    scanf(" %i", &Number_three);
    if (Number_One > Number_Two)
    {
        if (Number_One > Number_three)
        {
            printf("the largest number is : %i", Number_One);
        }
        else
        {
            printf("the largest number is : %i", Number_three);
        }

    }
    else
    {
        if (Number_Two > Number_three)
        {
            printf("the largest number is : %i", Number_Two);

        }
        else
        {
            printf("the largest number is : %i", Number_three);

        }

    }
    return 0;
}
