#include <stdio.h>
#include <math.h>

void main(){

    int harga,berat,hargatotal;

    printf("Masukan Berat barang \t = ");
    scanf("%i",&berat);

    harga = 15000;

    if(berat <= 1){
        printf("Total bayar \t = %i",harga);
    }
    else {
        hargatotal = berat*harga-5000;
        printf("Total bayar \t = Rp. %i",hargatotal);
    }

}
