#include <stdio.h>
void sum (int *a , int *b);
int main()
{
  int Num_1 = 1 ;
  int Num_2 = 2 ;
  printf("sum befor =  %i ", Num_1 + Num_2);
  update(&Num_1,&Num_2);
  printf("\n");
  printf("the sum after = %i \n",Num_1 + Num_2);


    return 0 ;
}

void update (int *a , int *b )
{
    *a+=3;
    *b+=3;
}
