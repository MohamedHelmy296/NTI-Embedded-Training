    #include <stdio.h>
    int main ()
{
    /* This program to print the states of score */
    float score;
    int i ;
    printf("please enter your score : \n");
    for(i = 0 ; i<100 ; i++)
    {
        scanf(" %f", &score );
        if((score < 0 ) || (score > 100))
        {
            printf("error \n");
        }
        else if (score < 50)
        {
            printf("fail \n");
        }
        else if ((score >= 50) && (score < 65))
        {
            printf("pass \n");
        }
        else if ((score >= 65 )&& (score < 75))
        {
            printf("good \n");
        }
        else if ((score >= 75) && (score < 85 ))
        {
            printf("very good \n");
        }
        else if ((score >= 85 )&& (score <= 100))
        {
            printf("Ex \n");
        }
    }
    return 0 ;
    }
