#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int  maxsize  = 50;

int string_length (int size, char *str);
void string_copy (char *arrayD , char *arrayS);

int main()
{
    char sourcearray [maxsize] ;
    char desarray [maxsize];
    printf("please enter your string array! \n");
    scanf("%s",sourcearray);
    printf(" string array!  %s \n",sourcearray);
    printf("the length of source is %i ", string_length(maxsize,sourcearray));
    string_copy(desarray,sourcearray);
    printf("the copy array %s \n ", desarray);


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

void  string_copy (char *arrayD , char *arrayS)
{
   int n = string_length(maxsize,arrayS);

    for ( int i = 0 ; i < n+1 ; i++)
    {

        *(arrayD+i) = *(arrayS+i);

    }
}
