#include <stdio.h>
int Reverse(int *AR);


int main()
{
    printf("---------------------------- \n");
    fillArray(&array[0]);
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("number%i: %i \n",i+1,array[i]);
    }

    return 0 ;
}

void fillArray(int *Ar[5])
{
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("please enter number%i: ",i+1);
        scanf(" %i", &Ar[i]);
    }

}
