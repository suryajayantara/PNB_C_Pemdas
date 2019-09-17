#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(){

    printf("=================== SISI MIRING SEGITIGA =================\n");
    float sisiTegak,sisiDatar,sisiMiring,r,keliling,luas,sisi,volume;


    printf("Masukan Sisi Tegak \t:");
    scanf("%f",&sisiTegak);

    printf("Masukan Sisi Datar \t:");
    scanf("%f",&sisiDatar);


    sisiMiring = sqrt(pow(sisiTegak,2)+pow(sisiDatar,2));
    printf("--------------------------\n");

    printf("Sisi miring \t= %.2f ",sisiMiring);
    printf("cm\n\n");

    printf("============ LUAS DAN KELILING LINGKARAN =================\n");

    printf("Masukan jari-jari \t:");
    scanf("%f",&r);

    keliling = 2*pi*r;
    luas = pi*pow(r,2);

    printf("--------------------------\n");

    printf("Luas \t\t= %.2f ",luas);
    printf("cm \n");
    printf("Keliling \t= %.2f ",keliling);
    printf("cm \n\n");

    printf("========================= VOLUME KUBUS ====================\n");


    printf("Masukan panjang Sisi \t: ");
    scanf("%f",&sisi);

    volume = pow(sisi,3);

    printf("--------------------------\n");
    printf(" Volume Kubus adalah \t:%.2f ",volume);
    printf("cm\n");


    return 0;


}
