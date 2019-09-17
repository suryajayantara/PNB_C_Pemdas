#include <stdio.h>
#define pi 3.14
int main(){


    float r,keliling,luas;

    printf("Masukan jari-jari \t:");
    scanf("%f",&r);

    keliling = 2*pi*r;
    luas = pi*pow(r,2);

    printf("============================\n");

    printf("Luas \t\t= %.2f ",luas);
    printf("cm \n");
    printf("Keliling \t= %.2f ",keliling);
    printf("cm \n");


    return 0;
}
