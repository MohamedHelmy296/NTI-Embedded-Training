#include <stdio.h>
int main()
{
    /*
        This program to make swap between to number
    */
    int number_one ,number_two ,temp ;
    printf("please enter number_one :");
    scanf(" %i", &number_one);
    printf("please enter number_two :");
    scanf(" %i", &number_two);
    printf("Befor swaping number_one is : %i , number_two is : %i \n",number_one , number_two);
    temp = number_two ;
    number_two = number_one ;
    number_one = temp ;
    printf("After swaping number_one is : %i , number_two is : %i \n",number_one , number_two);

    return 0 ;
}
