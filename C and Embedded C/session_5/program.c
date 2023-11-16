#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
    program to cal the frequency of each number in array
    */
    int i, j, counter ;
    int Num_Array;

    //get number array form user
    printf("please add number of array");
    scanf("%i",&Num_Array);
    int array[Num_Array];

    //enter array numbers form user
    for(i=0; i<Num_Array; i++)
    {
        printf("enter number %i: \n",i+1);
        scanf("%i",&array[i]);
    }
    int C_array[Num_Array];
    for (i=0 ; i<Num_Array;i++)
    {
        counter = 0 ;
        for(j=0 ; j < Num_Array ; j++)
        {
            if (array[i] == array[j])
                counter++;
        }
        C_array[i]=counter;
    }
    for(i=0 ; i<Num_Array;i++)
    {
        printf("number in index %i: %i \n " ,i,C_array[i]);
    }



        return 0;
}
