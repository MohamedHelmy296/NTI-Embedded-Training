#include <stdio.h>
void sum (int *a , int *b , int *summ);

int main ()
{
    int x = 1 ;
    int y = 2 ;
    int s = 0 ;
    sum(&x , &y , &s);
    printf("the sum = %i",s);

    return 0 ;
}

void sum (int *a , int *b , int *summ)
{
    *sum = *a +*b;
}
