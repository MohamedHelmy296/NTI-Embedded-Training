#include<stdio.h>  //sum avg min max

void fillarray(int *ptr, int n);
void sum (int *ptr, int size, int *result_of_sum , float *result_of_avg);

void min (int *ptr , int size , int *result_of_min);
void max (int *ptr , int size , int *result_of_max);
int main ()
{
    int n , sum_ =0 , minn = 0 , maxx =0;
    float avg_;
    printf("please enter the n number of array :  ");
    scanf("%d",&n);
    int array[n];
    fillarray(array,n);
    for(int i = 0 ; i < n ; i++)
    {
            printf("value %i : %i \n",i+1 , array[i]);
    }
    sum(array,n, &sum_,&avg_);
    printf("the sum = %i , the avg = % f \n", sum_ , avg_);
    min(array,n,&minn);
    max(array,n,&maxx);
    printf("the min is %i and the max is %i \n",minn , maxx);



    return 0 ;
}
void fillarray(int *ptr, int size)
{
    for (int i=0 ; i < size ; i++)
    {
        scanf("%d",(ptr+i));
    }
}

void sum (int *ptr, int size, int *result_of_sum , float *result_of_avg)
{
    *result_of_sum = 0 ;
    for(int i = 0 ; i < size ; i++)
    *result_of_sum +=*(ptr+i);
    *result_of_avg = (float)(*result_of_sum)/size;
}

void min (int *ptr , int size , int *result_of_min)
{
    *result_of_min = *(ptr+0);
    for(int i = 0 ; i < size ; i++)
    {
        if (*result_of_min > *(ptr+i))
            *result_of_min = *(ptr+i);

    }
}
void max (int *ptr , int size , int *result_of_max)
{
    *result_of_max = *(ptr+0);
    for(int i = 0 ; i < size ; i++)
    {
        if (*result_of_max < *(ptr+i))
            *result_of_max = *(ptr+i);

    }
}





