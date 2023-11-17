/*
برنامج لطباعه محيط ومساحه الدائره 
*/
#include <stdio.h>
#include <stdlib.h>
const float pi = 3.14;
void area (float D );
void ci (float D);

int main()
{
    float Diameter ;
    printf("Please Enter the redisc of the circle: \n");
    scanf("%f",&Diameter);
    area(Diameter);
    ci(Diameter);
}
void area (float D )
{
    float areaa ;
    areaa = pi * D * D ;
    printf("the area = %f \n",areaa);
}
void ci (float D)
{
    float cir ;
    cir = 2 * pi * D ;
    printf("the cir = %f \n",cir);

}
