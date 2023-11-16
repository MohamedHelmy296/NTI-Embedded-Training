#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
    program to calculate the frequency of each number in the array
    */
    int i, j, counter ;
    int Num_Array;

    //get number array from user
    printf("please add number of array");
    scanf("%i",&Num_Array);
    int array[Num_Array];

    //enter array numbers from the user
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
        /*
        if you need to print the unique number.....
        {
        if(C_array[i] == 1)
            printf(" %i : is uniqe \n",array[i]);
        }
        */
        printf("number in index %i: %i \n " ,i,C_array[i]);
    }



        return 0;
}
