/*
    function ------> use function to compare between two numbers    
*/
#include <stdio.h>
#include <stdlib.h>

int compare (int y, int x );

int main()
{
    int num_1, num_2  ;
    printf("Please enter two number : \n");
    scanf("%d %d",&num_1, &num_2);
    comper(num_1,num_2);

    return 0;
}

int compare (int n1, int n2 )
{
    if (n1>n2)
        printf("num_one %i > num_two %i",n1, n2);
    else
        printf("num_two %i > num_one %i",n2, n1);
}
