#include <stdio.h>

int main()
{

    printf("This program to print % and / of two numbers \n");
    int number_one , number_two , division , module ;
    printf("please Enter number one: \n");
    scanf(" %i", &number_one);
    printf("please Enter number two: \n");
    scanf(" %i", &number_two);
    division = number_one / number_two ;
    module = number_one % number_two ;
    printf("devision = %i \n", division);
    printf("module = %i \n", module);
  
    return 0 ;
}
