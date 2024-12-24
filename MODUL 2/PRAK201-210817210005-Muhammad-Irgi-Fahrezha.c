#include <stdio.h>

int main () {

    char nama   [30];
    char nim    [30];
    char kelas  [30];
    char ttl    [30];
    char alamat [100];
    char hobby  [30];
    char hp     [30];

    printf("Nama                 : ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM                  : ");
    fgets(nim, sizeof(nim), stdin);

    printf("Kelas Paralel        : ");
    fgets(kelas, sizeof(kelas), stdin);

    printf("Tempat/Tanggal Lahir : ");
    fgets(ttl, sizeof(ttl), stdin);

    printf("Alamat               : ");
    fgets(alamat, sizeof(alamat), stdin);

    printf("Hobby                : ");
    fgets(hobby, sizeof(hobby), stdin);

    printf("No. HP               : ");
    fgets(hp, sizeof(hp), stdin);

    printf("\n");
    printf("Nama                 : %s", nama);
    printf("NIM                  : %s", nim);
    printf("Kelas Paralel        : %s", kelas);
    printf("Tempat/Tanggal Lahir : %s", ttl);
    printf("Alamat               : %s", alamat);
    printf("Hobby                : %s", hobby);
    printf("No. HP               : %s", hp);

    return 0;
}