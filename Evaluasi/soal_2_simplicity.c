#include <stdio.h>
#include <math.h>


void main(){

    int bBarang,harga;

    printf("Masukan Berat Barang (Kg) \t = ");
    scanf("%d",&bBarang);

    harga = 15000+(bBarang-1)*10000;
    printf("Hasilnya adalah \t = %d ",harga);

}
