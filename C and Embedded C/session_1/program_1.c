#include <stdio.h>
int main()
{
    /*
        This program enters id, a score of 2 students,  and Displays them and the sum of the score
    */
    int id_1;
    int id_2;
    float score_1;
    float score_2;
    float sum = 0 ;
    int no = 1 ;
    printf("Please Enter the data of student %i :",no);
    scanf("%i", &id_1);
    scanf("%f", &score_1);
    no++;
    printf("Please Enter the data of student %i : ",no);
    scanf("%i", &id_2);
    scanf("%f", &score_2);
    printf("The id_1 : %i and the score : %f \n", id_1, score_1);
    printf("The id_2 : %i and the score : %f \n", id_2, score_2);
    sum = score_1 + score_2;
    printf(" \n The sum of score : %f \n",sum);

    return 0 ;
}
