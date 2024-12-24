#include <stdio.h>

int main () {
    int jumlah;

    scanf("%d", &jumlah);
    
    int array[jumlah];

    for (int i = 0; i < jumlah; i++) {
        scanf("%d", &array[i]);
        int hasil = array[i] * (i + 1);
        printf("%d ", hasil);
    }

    return 0;
}