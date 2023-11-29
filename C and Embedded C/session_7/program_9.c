#include <stdio.h>

int main ()
{
        int a = 5 ;
        int reslut = sum(a);
        printf("the result = %i \n", reslut);


    return 0 ;
}
int sum (int x)
{
    if(x>0)
        return x+sum(x-1) ;
    return x ;
}
