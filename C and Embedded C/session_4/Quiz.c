#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    /*
     C program to swap the first and last digits of a number. 
    */
    int originalNum, lastDigit ,firstDigit,power,result ;
    int counter;
    int number , num;
    printf("Please enter number:");
    scanf("%i", &originalNum );
    number = originalNum  ;
    num = originalNum;
    while(number > 0)
    {
        number = number/10;
        counter++;
    }
    power = pow(10,counter-1);
    printf("power = %i\n",power);
    lastDigit = originalNum % 10;
    printf("last digit = %i \n",lastDigit);
    while ( num>= 10)
    {
        num /= 10;
    }
    firstDigit = num;
    printf("firt digit = %i \n",firstDigit);
   result=((lastDigit*power)+((originalNum%power)-lastDigit)+firstDigit);
   printf("result = %i \n",result);



    return 0 ;
}
