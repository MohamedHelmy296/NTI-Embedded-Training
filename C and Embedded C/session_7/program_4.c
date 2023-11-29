#include <stdio.h>

void swap (int *a , int *b);

int main()
{
    int x = 5 ;
    int y = 10 ;
    printf("x = %i , y = %i \n",x ,y);
    swap(&x , &y);
    printf("after swap .... x= %i , y= %i \n",x , y);


return 0 ;

}
void swap (int *a , int *b)
{
    int swap_ = *a ;
    *a = *b ;
    *b = swap_ ;

}
