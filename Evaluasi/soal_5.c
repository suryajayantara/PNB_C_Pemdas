#include <stdio.h>


void main()
{
    int sSemua,kBesar,kSedang,kKecil,kemasan,hKemasan,sBox,totalKemasan,totalHarga;

    printf("\t\t Toko Kopi Mas Athong\n");
    printf("---------------------------------------------------------\n");
    printf("Masukan Jumlah Kemasan \t= ");
    scanf("%d",&kemasan);

    hKemasan = 50000;

    kBesar = kemasan/20;
    sBox = kemasan%20;

    kSedang = sBox/10;
    sBox = sBox%10;

    kKecil = sBox / 5;
    sBox = sBox%5;

    sSemua = sBox < 5 && sBox > 0  ;

    kKecil += sSemua;

    totalKemasan = (kBesar*10000) + (kSedang*7500) + (kKecil * 5000);
    totalHarga = kemasan*hKemasan + totalKemasan;
    printf("---------------------------------------------------------\n");
    printf("Kemasan Besar \t= %d \n",kBesar);
    printf("Kemasan Sedang \t= %d \n",kSedang);
    printf("Kemasan Kecil \t= %d \n",kKecil);
    printf("---------------------------------------------------------\n");
    printf("Total Bayar = Rp . %d",totalHarga);


}

