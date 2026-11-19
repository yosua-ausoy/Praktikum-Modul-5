def mutlak(angka):
    if angka < 0:
        return angka * -1
    return angka

def hitung(nilai1, nilai2):
    selisih = nilai1 - nilai2
    return mutlak(selisih)

a, c, b, d = map(int, input().split())

Hasil = hitung(a, b) + hitung(c, d)

print(mutlak(Hasil))