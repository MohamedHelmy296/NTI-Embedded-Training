#include <stdio.h>
int main()
{
    int day ;
    printf("this program to print name of the day \n");
    printf("please enter number of day : \n " );
    scanf(" %d", &day);
    switch(day)
    {
    case 1:
        printf("the day is SA");
        break;
    case 2:
        printf("the day is Su");
        break;
    case 3:
        printf("the day is Sa");
        break;
    case 4:
        printf("the day is Mo");
        break;
    case 5:
        printf("the day is th");
        break;
    case 6:
        printf("the day is we");
        break;
    case 7:
        printf("the day is fr");
        break;
    default:
    {
        printf("invalid number");
    }
    }
    return 0;
}


