def reverse(angka):
    hasil_balik = 0

    while angka > 0:
        digit_terakhir = angka % 10
        hasil_balik = (hasil_balik * 10) + digit_terakhir
        angka = angka // 10  

    return hasil_balik

A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)

C = A + B

print(reverse(C))