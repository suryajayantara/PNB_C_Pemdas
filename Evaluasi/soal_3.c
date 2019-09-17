#include <stdio.h>
#include <math.h>

void main(){

    int beratTas,jmlPembelian,harga,total;

    printf("Masukan Berat Tas (Kg) \t\t = ");
    scanf("%d",&beratTas);
    printf("Masukan Jumlah Tas yang Dibeli \t = ");
    scanf("%d",&jmlPembelian);
    printf("Masukan Harga (Rp) \t\t = ");
    scanf("%d",&harga);

    total = (beratTas*jmlPembelian*harga) + (beratTas*jmlPembelian*harga*0.1);
    total = total;

    printf("======================================\n");

    printf("Total Belanja Mu adalah \t = %d",total);

}
