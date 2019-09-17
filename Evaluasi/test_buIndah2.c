#include <stdio.h>


void main()
{

    int bBadan,kKalori;
    float tBadan,mIndex;

    printf("Masukan Tinggi Badan (Cm) \t = ");
    scanf("%f",&tBadan);
    printf("Masukan Tinggi Badan (Kg) \t = ");
    scanf("%d",&bBadan);

    tBadan = tBadan/100;
    mIndex = bBadan/pow(tBadan,2);
    kKalori = 30*bBadan;


    printf("===================================\n");
    printf("Index Berat Badan \t= %.1f \n",mIndex);
    printf("Kebutuahan Kalori \t= %d ",kKalori);



}
