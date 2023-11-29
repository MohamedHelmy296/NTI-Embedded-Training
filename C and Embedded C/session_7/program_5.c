#include <stdio.h>

// Function to fill an array by reference
void fillArray(int *arr[5]);
void printArray(int *arr[5]);
void sum_avg(int *arr[5]);

int main()
{
    int myArray[5];
    // Call the function to fill the array
    fillArray(&myArray);
    sum_avg(&myArray);

    return 0;
}

void fillArray(int *arr[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("value %i :",i+1);
        scanf(" %i",&arr[i]);
    }
}
void printArray(int *arr[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("number %i is %i \n", i+1 , arr[i]);
    }
}
void sum_avg(int *arr[5])
{
    int sum = 0 ;
    int avg = 0 ;
    for (int i = 0 ; i < 5 ; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / 5 ;
    printf("the sum = %i \n", sum);
    printf("the avg = %i", avg);
}
void reverse(int *arr[5])
{

}
