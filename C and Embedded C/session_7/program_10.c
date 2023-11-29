#include <stdio.h>

int main()
{
    int a = 5 , b = 3 ;
    int reslut = power(a,b);
    printf("the result = %i \n", reslut);
    return 0 ;
}
int power (int x , int y)
{
    if(y>1)
        return x*power(x,y-1) ;
    else
    return x ;
}
