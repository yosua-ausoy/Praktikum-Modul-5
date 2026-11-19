#include <stdio.h>
#include <math.h>

int mutlak(int angka) {
    if (angka < 0) {
        return angka * -1; 
    }
    return angka; 
}

int hitung(int nilai1, int nilai2) {
    int selisih = nilai1 - nilai2;
    return mutlak(selisih); 
}

int main() {
    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);

    int Hasil = hitung(a, b) + hitung(c, d);
    
    printf("%d", mutlak(Hasil));

    return 0;
}