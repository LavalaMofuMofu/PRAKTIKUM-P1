baris, kolom = map(int, input().split())

elemen = list(map(int, input().split()))

matriks = []
for i in range(baris):
    matriks.append(elemen[i * kolom:(i + 1) * kolom])

for i in range(baris):
    for j in range(kolom):
        print(matriks[i][j], end=' ')
    print()