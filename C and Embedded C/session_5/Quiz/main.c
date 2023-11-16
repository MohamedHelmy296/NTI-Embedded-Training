#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    /*
    program to get array number from user and sorted it 
    */
    int i, j, temp;
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

    for(i=0; i<Num_Array-1; i++)
    {
        for(j=i+1; j<Num_Array; j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }

    }
    printf("array after sorted \n");
    //just for fun
    printf("please Wait ");
    for(i=0 ; i < 5; i++)
    {
        printf(".");
        Sleep(600);
    }
    printf("\n");
    //
    for(i=0; i<Num_Array; i++)
    {
        printf("enter number %i \n",array[i]);
    }


    return 0;
}

