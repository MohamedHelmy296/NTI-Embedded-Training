#include <stdio.h>
int add (int num1 , int num2 );
int sub (int num1 , int num2);
int mult (int num1 , int num2);
int main ()
{
    int (*ptr[])(int,int)={add,sub,mult};
    int n1 , n2  ,op ;
    printf("please enter two number : \n");
    scanf(" %i  \n %i" , &n1 , &n2);
    printf("please enter the number of your operator\n 0 : + op \t 1 : - op \t 2 : op * \n ");
    scanf("%i",&op);
    switch(op)
    {
    case 0 :
        printf("sum :%i",(*ptr[0])(n1,n2));
        break ;
    case 1 :
        printf("sub : %i",(*ptr[1])(n1,n2));
        break ;
    case 2 :
        printf("mult : %i",(*ptr[2])(n1,n2));
        break ;
    default :
        printf("error \n");
        break ;
    }


    return 0 ;
}
int add (int num1 , int num2 )
{
    int result = 0 ;
    result = num1 + num2 ;
    return result ;
}

int sub (int num1 , int num2)
{
    int result = 0;
    if (num1 > num2)
        result = num1 - num2 ;
    else
        result = num2 - num1 ;

    return result ;

}
int mult (int num1 , int num2)
{
    int result = 0 ;
    result = num1*num2;
    return result ;
}













