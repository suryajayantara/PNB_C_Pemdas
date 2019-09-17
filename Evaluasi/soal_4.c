#include <stdio.h>
#include <math.h>

void main()
{

    int dtk,jam,mnt,sisa;

    printf("Masukan Detik \t=");
    scanf("%d",&dtk);

    jam = dtk/3600;
    sisa = dtk-(jam*3600);

    mnt = sisa/60;
    dtk = sisa-(mnt*60);

    printf("Hasilnya adalah %d jam %d Menit %d Detik",jam,mnt,dtk);




}
