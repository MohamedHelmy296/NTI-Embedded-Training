#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
      C Program to accept character and check if it small or capital letter
    */
    char character ;
    printf("Please Enter character : ");
    scanf(" %c", &character);
    if ( (character >= 65) && (character <=90) ) //ASCII 
    {
        printf("the character is capital letter ");
    }
    else if ((character >= 97)&&(character <=122)) //ASCII
    {
        printf("the character is small letter");
    }
    else
    {
        printf("invalid character");
    }

    return 0;
}
