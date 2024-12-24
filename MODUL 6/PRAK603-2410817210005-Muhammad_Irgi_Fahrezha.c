#include <stdio.h>

int main () {
    int n1;
    int n2;

    scanf("%d %d", &n1, &n2);

    int baris1[n1];
    int baris2[n2];

    if (n1 == n2) {
        for (int i = 0; i < n1; i++){
            scanf("%d", &baris1[i]);
        }
        for (int i = 0; i < n2; i++){
            scanf("%d", &baris2[i]);
        }
        for (int i = 0; i < n1; i++){
            int hasil = baris1[i] * baris2[i];
            printf("%d ", hasil);
        }
        
    }
    else {
        printf("Jumlah tidak sama");
    }

    return 0;
}