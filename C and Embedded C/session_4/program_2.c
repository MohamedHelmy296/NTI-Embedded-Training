#include <stdio.h>
int main ()
{
    /*
        inverse array
    */
    int n  ,i ,j , temp;
    printf("n of number of array : \n");
    scanf("%i",&n);
    int array[n];
    printf("Please enter number to stor in array \n");
    for(i=0 ; i < n ; i++)
    {
        printf("number %i : ",i+1);
        scanf("%i",&array[i]);
    }
    for(i=0,j=n-1;j>i;i++,j--)
    {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
    printf("array after revers \n");
    for(i=0;i<n;i++)
    {
        printf("%i \n",array[i]);
    }


    return 0 ;
}
