#include <stdio.h>
#include <math.h>

int mutlak(int angka){
    if (angka < 0) {
        return -angka;
    }
    else {
        return angka;
    }
    
}

int hitung (int nilai1, int nilai2){
    return mutlak(nilai1 - nilai2);
}

int main () {
    
    int a, b, c, d, Hasil;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    Hasil = hitung(a,c) + hitung(b,d);
    printf("%d", Hasil);

    return 0;
}