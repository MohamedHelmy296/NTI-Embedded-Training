#include <stdio.h>
int main ()
{
    /*
    C program to enter 10 number and print them
    then print the sum of them
    then print avg
    then print max number
    then print min number

    */
    int number[10];
    int arrmin[10];
    int arrmax[10];
    int i, j, k,max, min;
    int sum =0 ;
    int avg;
    //enter numbers
    for (i=0 ; i < 10 ; i++)
    {
        printf("Please enter number %i :",i+1);
        scanf("%i",&number[i]);
    }
    //prints numbers
    for (i=0 ; i < 10 ; i++)
    {
        printf("the numbers you have entered %i \n",number[i]);
    }
    //sum
    for(i=0 ; i<10 ; i++)
    {
        sum = sum +number[i];
    }
    printf("sum = %i \n",sum);
    //avg
    avg = sum/10;
    printf("avg = %i \n",avg);
    //max number
    max = number[0];
    for(i=0 ; i < 10 ; i++ )
    {
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    printf("max number is : %i \n",max);
    //min
    min = number[0];
    for(i=0 ; i < 10 ; i++ )
    {
        if (number[i] < min)
        {
            min = number[i];
        }
    }
    printf("min number is : %i \n",min);
    //numbers < avg  -----  numbers > avg
    j =0 ; k=0;
    for(i=0 ; i < 10 ; i++)
    {
        if (avg > number[i])
        {
            arrmin[j]=number[i];
            j++;
        }
        else
        {
            arrmax[k]=number[i];
            k++;
        }

    }

    //prints numbers > avg
    printf("number > avg \n");
    for(i=0 ; i < j ; i++)
    {
        printf("%i \n",arrmax[i]);
    }
    //prints numbers < avg
    printf("numbers < avg \n");
    for (i=0 ; i < k ; i++)
    {
        printf("%i \n",arrmin[i]);
    }



    return 0 ;
}
