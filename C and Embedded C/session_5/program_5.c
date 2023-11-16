#include <stdio.h>

int main()
{
    /*
    two di array
    sum the left diagonals of matrix
    */
    int Row, col;
    int i, j, sum=0 ;
    printf("Please enter no.of Row \n");
    printf("---------------------------\n");
    scanf("%d",&Row);
    col = Row ;
    int arr[Row][col];
    printf("*****note******\n to print the sum of the left diagonals of matrix \n");
    printf(" number of row must be equal to number of col \n");
    printf("_______________________________________________________________________________\n");
    //get number form user
    for(i=0 ; i < Row ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf("please enter number of (%i,%i)",i,j);
            scanf("%i",&arr[i][j]);
        }
    }
    //print the array to screen
        for(i=0 ; i < Row ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf("%i\t",arr[i][j]);
        }
        printf("\n");
    }

    //sum in the first way
    for(i=Row-1 ; i >=0  ; i--)
    {
        for(j=0 ; j<col ; j++)
        {
            if(i == j)
            sum += arr[i][j];
        }
    }
   //sum in the secand way 
  /*
    for(i=0 ; i <Row  ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            if((i+j)==Row-1)
            {
                sum += arr[i][j];
            }
        }
    }
  */

    //print to screen
    printf("the sum of the left diagonals of matrix is : %i",sum);



    return 0 ;
}
