
#include <stdio.h>

int main()
{
    int n ;
    int sumN;
    int avgN;
    printf("please Enter number of vl \n");
    scanf(" %d", &n);
    int myarray[n];
    fillArray(myarray,n);
    printArray(myarray,n);
    sum_avg(myarray,n,&sumN,&avgN);
    printsum_avg(sumN,avgN);
    reverse(myarray,n);

return 0 ;
}
void fillArray (int *a , int size)
{
    int i ;
    for(i=0 ; i < size ; i++)
    {
        scanf(" %d", &a[i]);
    }
}
void printArray (int *a , int size)
{
    int i ;
    for (i=0 ; i < size ; i++)
    {
        printf("number %i : %i \n",i+1, a[i]);
    }
}
void sum_avg (int a[] , int size, int *sum , int *avg)
{
    int i ;
    *sum = 0 ;
    for(i=0 ; i < size ; i++)
    {
        *sum = *sum + a[i];
    }
    *avg = *sum / size;
}
void printsum_avg (int sum , int avg)
{
   printf("the sum = %i\nthe avg = %i\n", sum , avg);
}
void reverse (int*a, int size)
{
    int i ,j ;
    int temp;
    for(i = 0 , j = size-1 ; j>i ; i++ , j-- )
    {
        temp = *(a+i);
        *(a+i) = *(a+j);
        *(a+j) = temp ;
    }
    printArray(a,size);
}
