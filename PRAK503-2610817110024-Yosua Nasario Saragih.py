def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b

bilangan = int(input())

daftar_angka = list(map(int, input().split()))

maks = -100000
minim = 100000

for nilai in daftar_angka:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(f"{maks} {minim}")