#include <stdio.h>

int reverse(int angka) {
    int hasil_balik = 0;

    while (angka > 0) {
        int digit_terakhir = angka % 10;             
        hasil_balik = (hasil_balik * 10) + digit_terakhir; 
        angka = angka / 10;                           
    }

    return hasil_balik;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    A = reverse(A);
    B = reverse(B);

    int C = A + B;

    printf("%d", reverse(C));

    return 0;
}