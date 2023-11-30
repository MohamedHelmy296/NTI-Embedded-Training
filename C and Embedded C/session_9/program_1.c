#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int string_length (int s, char *str);

int main()
{
    int size ;
    printf("enter array size \n");
    scanf("%i",&size);
    char myString[size];
    printf("please enter your string array! \n");
    scanf("%s",myString);
    printf(" string array!  %s \n",myString);
    printf("The length of the string is: %d !",string_length(size,myString));



}

int string_length (int size, char *str)
{
    int length=0;

    for (int i = 0 ; i < size ; i++)
    {
        if (*(str+i) != '\0')
            length++;
        else
            break;
    }
    return length ;

}



