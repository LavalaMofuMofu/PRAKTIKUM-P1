a, b, c, d = map(int, input().split())

def mutlak (angka):
    if angka < 0:
        return -angka
    else:
        return angka

def hitung (nilai1, nilai2):
    return mutlak(nilai1 - nilai2)

hasil = hitung(a,c) + hitung(b,d)

print(hasil)
    