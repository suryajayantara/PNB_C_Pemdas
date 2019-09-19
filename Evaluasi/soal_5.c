#include <stdio.h>
#include <math.h>

void main()
{
    int sSemua,kBesar,kSedang,kKecil,kemasan,hKemasan,sBox,totalKemasan,totalHarga;

    printf("Masukan Jumlah Kemasan \t= ");
    scanf("%d",&kemasan);

    hKemasan = 50000;

    kBesar = kemasan/20;
    sBox = kemasan%20;

    kSedang = sBox/10;
    sBox = kemasan%10;

    kKecil = sBox / 5;

    sSemua = sBox < 5 && sBox > 0  ;

    kKecil += sSemua;

    totalKemasan = (kBesar*10000) + (kSedang*7500) + (kKecil * 5000);
    totalHarga = kemasan*hKemasan + totalKemasan;

    printf("Kemasan Keci \t= %d \n",kBesar);
    printf("Kemasan Sedang \t= %d \n",kSedang);
    printf("Kemasan Kecil \t= %d \n",kKecil);

    printf("Total Bayar = %d",totalHarga);


}
