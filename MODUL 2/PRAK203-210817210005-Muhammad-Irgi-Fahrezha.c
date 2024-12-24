#include <stdio.h>

int main () {

    float a;
    float b;
    float i;
    float j;
    float x;
    float y;
    float hasil;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &i);
    scanf("%f", &j);
    scanf("%f", &x);
    scanf("%f", &y);

    hasil = (((a - b)* i) / j) - (x + y);
    

    printf("%.3f", hasil);
}