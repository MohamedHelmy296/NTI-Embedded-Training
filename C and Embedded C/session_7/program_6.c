
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main()
{
    // Example usage
    int number = 5;

    // Call the recursive function to calculate factorial
    int result = factorial(number);

    // Print the result
    printf("Factorial of %d is: %d\n", number, result);

    return 0;
}
