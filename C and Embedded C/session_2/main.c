#include <stdio.h>
#include <stdlib.h>

int main()
{

    return 0;
}
/*************************************************************************************************
   printf("Program for analysis of people of certain age groups with salary "
          "who are eligible for getting a suitable loan in banking system  if "
          "their condition and norms get satisfied using nested if statement."
          "Age<18 illegal (>18,<50 for salary >3000) accept--->50 illegal"
          "Show details for user in weakness point \n \n");

          int age ;
          float salary ;
          printf("please enter your age: \n");
          scanf(" %i" , &age);
          if( age > 18)
          {
              if (age < 50)
              {
                  printf("enter your salary : \n");
                  if (salary > 3000)
                  {
                      printf("your are accpeted \n");
                  }
                  else
                    {
                    printf("your salary less than 3000 you can't loan \n");
                    }
              }
              else
              {
                  printf("your age is bigger than 50 you can't pay your loan \n");

              }
          }
          else
          {
              printf("your age is less than 18 so you are illegal \n");
          }
*************************************************************************************************/

/**************************************************************************************************
    printf("This program to print % and / of two numbers \n");
    printf("please Enter number one: \n");
    scanf(" %i", &number_two);
    printf("please Enter number two: \n");
    scanf(" %i", &number_two);
    dev = number_one / number_two ;
    module = number_one % number_two ;
    printf("devision = %i \n", dev);
    printf("module = %i \n", module);
*************************************************************************************************/

/**************************************************************************************************
float score;
    printf("This program to print the states of score   \n");
    printf("please enter your score : \n");
    int i ;
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
*************************************************************************************************/

/**************************************************************************************************
    int id ;
    int score;
    char address;
    printf("This program to use if and else if and else \n");
    printf("please enter your id:");
    scanf(" %i", &id);
    if (id == 100)
    {
        printf("please enter your score \n");
        scanf(" %i", &score);
        if(score <= 50)
        {
            printf("please enter your address \n");
            scanf(" %c", &address);
            if(address == 'c')
            {
                printf("address is valid \n");
            }
            else
            {
                printf("address is invalid \n");
            }
        }
        else
        {
            printf("your score less than 50 \n");
        }
    }
    else
    {
        printf("invalid number");
    }

*************************************************************************************************/

/**************************************************************************************************
char operator_;
    int num_1, num_2, result;
    printf("calculate program \n");
    printf("please enter your operator : \n");
    scanf(" %c", &operator_ );
    printf("please enter two numbers : \n");
    scanf(" %i %i", &num_1, &num_2);
    switch(operator_)
    {
    case '+':
    {
        result = num_1 + num_2;
        printf("%i %c %i = %i", num_1,operator_, num_2, result );
    }
    break ;

    case '-':
    {
        if (num_1 > num_2)
        {
            result = num_1 - num_2;
            printf("%i %c %i = %i", num_1,operator_, num_2, result );
        }
        else
        {
            result = num_2 - num_1;
            printf("%i %c %i = %i", num_2,operator_, num_1, result );
        }
    }
    break ;

    case '*':
    {
        if ((num_1&&num_2) == 1)
        {
            result = num_1 * num_2;
            printf("%i %c %i = %i", num_1,operator_, num_2, result );
        }
        else
        {
            printf(" invalid number \n");
        }

    }
    break ;
    case '/':
    {
        if ( num_1 > num_2)
        {
            if ( num_2 == 0 )
            {
                printf("error \n");
            }
            else
            {
                result = num_1 / num_2;
                printf("%i %c %i = %i", num_1,operator_, num_2, result );
            }

        }
        else
        {
            if ( num_1 == 0 )
            {
                printf("error \n");
            }
            else
            {
                result = num_2 / num_1;
                printf("%i %c %i = %i", num_2,operator_, num_1, result );
            }
        }
    }
    break ;
    case '%':
    {
        if ( num_1 > num_2)
        {
            if ( num_2 == 0 )
            {
                printf("error \n");
            }
            else
            {
                result = num_1 % num_2;
                printf("%i %c %i = %i", num_1,operator_, num_2, result );
            }

        }
        else
        {
            if ( num_1 == 0 )
            {
                printf("error \n");
            }
            else
            {
                result = num_2 % num_1;
                printf("%i %c %i = %i", num_2,operator_, num_1, result );
            }
        }
    }
    break ;

    default:
    {
        printf("invalid operation \n");
    }
    }
*************************************************************************************************/

/**************************************************************************************************
int day ;
    printf("this program to print name of the day \n");
    printf("please enter number of day : \n " );
    scanf(" %d",day);
    switch(day)
    {
    case 1:
        printf("the day is SA");
        break;
    case 2:
                printf("the day is Su");
        break;
    case 3:
                printf("the day is Sa");
        break;
    case 4:
         printf("the day is Mo");
        break;
    case 5:
        printf("the day is th");
        break;
    case 6:
                printf("the day is we");

        break;
    case 7:
                printf("the day is fr");

        break;

    default:
    {
        printf("invalid number");

    }
    }
*************************************************************************************************/
