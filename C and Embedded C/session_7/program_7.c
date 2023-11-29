#include <stdio.h>
int main()
{
    int a = 7 ;
    printf("%i",fibonacci(a));


    return 0 ;
}

int fibonacci(int n)
{
    // Base cases: Fibonacci of 0 is 0 and Fibonacci of 1 is 1
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
