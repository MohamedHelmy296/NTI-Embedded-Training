#include<stdio.h>

int main ()
{
    int size ;
    char *ptr;
    scanf("%i",&size);
    char student[size+1];
    ptr=(char*)calloc(size+1,sizeof(char));
    for(int i = 0 ; i < size+1; i++)
    {
        scanf("%c",ptr+i);
    }
    for(int i = 0 ; i < size+1 ; i++)
    {
        printf("%c",*(ptr+i));
    }



        return 0 ;
}
////////................................OR.................................////////////
#include<stdio.h>

int main ()
{
    int size ;
    char *ptr;
    scanf("%i",&size);
    char student[size+1];
    ptr=(char*)calloc(size+1,sizeof(char));
    for(int i = 0 ; i < size; i++)
    {
        scanf(" %c",ptr+i);
    }
    for(int i = 0 ; i < size ; i++)
    {
        printf(" %c",*(ptr+i));
    }



        return 0 ;
}
