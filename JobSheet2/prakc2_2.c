#include <stdio.h>

int main(){

    char nama_komponen[15];
    int jumlah,harga,bayar;

    printf("Nama Komponen \t:");
    scanf("%s",nama_komponen);

    printf("harga \t:");
    scanf("%d",&harga);

    printf("jumlah \t:");
    scanf("%d",&jumlah);

    bayar = jumlah*harga;

    printf("=============== \n");
    printf("Total Bayar \t: %d" , bayar);


}
