#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
    program to sum two array
    */
    int i, j;
    int Num_Array_1;

    //get number of array 1 form user
    printf("*************************************************\n");
    printf("please add number of array number 1:\n");
    scanf("%i",&Num_Array_1);
    printf("*************************************************\n");
    printf("Please Enter %i Number: \n",Num_Array_1);
    printf("----------------------\n");
    int array_1[Num_Array_1];

    //enter array numbers form user
    for(i=0; i<Num_Array_1; i++)
    {
        printf("Enter number %i: \n",i+1);
        scanf("%i",&array_1[i]);
    }
    printf("\narray one if full now.....\n");
    printf("----------------------------------\n");
    //get number of array 2 from user
    printf("*************************************************\n");
    printf("Array number 2 \n");
    printf("*************************************************\n");
    printf("Please Enter %i Number: \n",Num_Array_1);
    printf("----------------------\n");
    int array_2[Num_Array_1];

    //enter array numbers form user
    for(i=0; i<Num_Array_1; i++)
    {
        printf("Enter number %i: \n",i+1);
        scanf("%i",&array_2[i]);
    }
    printf("\n array two if full now.....\n");
    printf("__________________________________\n");
    int sum[Num_Array_1];
    for(i=0 ; i<Num_Array_1 ; i++)
    {
        sum[i]=array_1[i]+array_2[i];
    }
    printf("the sum of two arrays is : \n");
    printf("____________________________________\n");
    for(i=0 ; i<Num_Array_1 ; i++)
    {
        printf("the sum of index %i , %i \n",i,sum[i]);
    }
    printf("\n program is finish now \n");
    printf("____________________________________________________________\n");





    return 0;
}
