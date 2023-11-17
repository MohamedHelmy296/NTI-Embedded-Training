/*
print all number primary under number = 30 or any number user give it to you
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n = 30;
    find_primes(n);

    return 0;
}



int is_prime(int num)
{
    int prime=true;
    int i;
    if(num==1||num==2);
    else
    {
        for (i=2; i<=num/2; i++)
        {

            if(num%i==0)
            {

                prime=0;


                break;
            }
        }
    }
    return prime;
}

void find_primes(int n)
{
    printf("Prime numbers from 1 to %d are:\n", n);

    for (int num = 1; num <= n; num++)
    {

        if (is_prime(num)==true)
        {

            printf("%d\n", num);
        }
    }

}
