#include <stdio.h>

int main(){

    float sisiTegak,sisiDatar,sisiMiring;


    printf("Masukan Sisi Tegak \t:");
    scanf("%f",&sisiTegak);

    printf("Masukan Sisi Datar \t:");
    scanf("%f",&sisiDatar);


    sisiMiring = sqrt(pow(sisiTegak,2)+pow(sisiDatar,2));
    printf("=============================\n");

    printf("Sisi miring \t= %.2f ",sisiMiring);
    printf("cm");



    return 0;
}
