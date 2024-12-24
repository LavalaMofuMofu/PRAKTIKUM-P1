jumlah = int(input())

array = list(map(int, input().split()))

for i in range(jumlah):
    hasil = array[i] * (i + 1)
    print(hasil, end= ' ')