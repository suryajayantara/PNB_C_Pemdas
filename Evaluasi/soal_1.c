#include <stdio.h>
#include <math.h>

void main(){

    //Declaration of variable
    int a,b,c,x1,x2;

    //scaning of value
    printf("Varible A \t= ");
    scanf("%d",&a);

    printf("Varible B \t= ");
    scanf("%d",&b);

    printf("Varible C \t= ");
    scanf("%d",&c);

    //Process Start Here

    x1 = (-b+ sqrt(pow(b,2)-4*a*c))/(a*2);
    x2 = (-b- sqrt(pow(b,2)-4*a*c))/(a*2);

    printf("X1 Adalah \t= %d \n",x1);
    printf("X2 Adalah \t= %d",x2);





}
