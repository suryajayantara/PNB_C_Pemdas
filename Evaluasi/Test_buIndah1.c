#include <stdio.h>

void main(){

    int jTiket,jDewasa,jAnak,hDewasa,hAnak,hTotal;

    printf("Masukan Jumlah Tiket Dewasa \t= ");
    scanf("%d",&jDewasa);


    printf("Masukan Jumlah Tiket Anak \t= ");
    scanf("%d",&jAnak);


    printf("Masukan Harga Tiket Anak \t= ");
    scanf("%d",&hAnak);

    hDewasa = hAnak*1.5;
    jTiket = jAnak+jDewasa;

    hTotal = (jDewasa*hDewasa) + (jAnak*hAnak);

    printf("=======================================\n");

    //Harga Tiket Anak
    printf("Total Tiket Anak \t= %d \n",jAnak);
    printf("Harga Tiket Anak \t= Rp %d \n",hAnak);
    //Harga Tiket Dewasa
    printf("Total Tiket Dewasa \t= %d \n",jDewasa);
    printf("Harga Tiket Dewasa \t= Rp %d \n",hDewasa);

    printf("Total Tiket Seluruh \t= %d \n",jTiket);
    printf("Total Harga Tiket \t= Rp %d \n",hTotal);


}
