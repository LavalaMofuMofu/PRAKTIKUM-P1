#include <stdio.h>
#include <math.h>

int main () {

    int alas = 5;
    int tinggi = 12;
    int sisi_miring;
    int keliling;
    int luas;

    sisi_miring = sqrt((tinggi*tinggi)+(alas*alas));

    keliling = tinggi + alas + sisi_miring;

    luas = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %d cm\n", sisi_miring);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %d cm\n",keliling);
    printf("Luas = %d cm",luas);
}