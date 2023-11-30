#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
const int  maxsize  = 50;

int string_length (int size, char *str);
void string_compaire (char *arrayD , char *arrayS);

int main()
{
    char array_1 [maxsize] ;
    char array_2 [maxsize];
    printf("please enter array1 \n");
    scanf("%s",array_1);
    printf(" string array!  %s \n",array_1);
    printf("please enter array2 \n");
    scanf("%s",array_2);
    printf(" string array!  %s \n",array_2);
    string_compare(array_1,array_2);
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

void string_compare (char *array1 , char *array2)
{
    bool f = true;
    int n = string_length(maxsize,array1);
    if ( string_length(maxsize,array1) != string_length(maxsize,array2) )
    {
        f = false ;
        printf("not matching len \n");
    }
    else
    {
       for(int i = 0 ; i < n+1 ; i++)
        {
            if (array1[i]!=array2[i])
            {
                f = false ;
                printf("not matching ide \n");
                break;
            }
            else
                continue;
        }
        if (f == true)
                    printf("matching  ide\n");


}
}
//////////////////////.....................................OR..................................//////////////////////
