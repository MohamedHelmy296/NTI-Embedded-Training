#include <stdio.h>

int main()
{
    int rowFirst, colFirst, rowSecond, colSecond;
    // Input dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix: \n");
    scanf("%d %d", &rowFirst, &colFirst);
    printf("\n-------------------------------------------------------------\n");
    printf("Enter the number of rows and columns of the second matrix: \n");
    scanf("%d %d", &rowSecond, &colSecond);
    int firstMatrix[rowFirst][colFirst], secondMatrix[rowSecond][colSecond], result[rowFirst][colSecond];
    if (colFirst != rowSecond)
    {
        printf("Error! Multiplication is not possible.\nNumber of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
    }
    else
    {

        // Input elements of the first matrix
        printf("Enter elements of the first matrix:\n");
        for (int i = 0; i < rowFirst; i++)
        {
            for (int j = 0; j < colFirst; j++)
            {
                scanf("%d", &firstMatrix[i][j]);
            }
        }

        // Input elements of the second matrix
        printf("Enter elements of the second matrix:\n");
        for (int i = 0; i < rowSecond; i++)
        {
            for (int j = 0; j < colSecond; j++)
            {
                scanf("%d", &secondMatrix[i][j]);
            }
        }

        // Initialize the result matrix to all zeros
        for (int i = 0; i < rowFirst; i++)
        {
            for (int j = 0; j < colSecond; j++)
            {
                result[i][j] = 0;
            }
        }

        // Multiply the matrices
        for (int i = 0; i < rowFirst; i++)
        {
            for (int j = 0; j < colSecond; j++)
            {
                for (int k = 0; k < colFirst; k++)
                {
                    result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
                }
            }
        }
        printf("Product of the matrices:\n");

        for (int i = 0; i < rowFirst; i++)
        {
            for (int j = 0; j < colSecond; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }

    }




    return 0 ;
}
