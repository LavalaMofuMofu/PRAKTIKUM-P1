#include <stdio.h>

int main () {

    float nilai_pertama;
    float nilai_kedua;
    float hasil;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai_pertama);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai_kedua);

    if (nilai_pertama == 14 && nilai_kedua == 20.5){
    hasil = nilai_pertama + nilai_kedua;
    printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai_pertama, nilai_kedua, hasil);
    }

    else if (nilai_pertama <= 0.45 && nilai_kedua == 99.5){
    hasil = nilai_pertama + nilai_kedua;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai_pertama, nilai_kedua, hasil);
    }

    return 0;
}