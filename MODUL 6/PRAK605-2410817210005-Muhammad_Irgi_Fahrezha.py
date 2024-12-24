n = int(input()) 

A = [[0] * n for _ in range(n)]
B = [[0] * n for _ in range(n)]
C = [[0] * n for _ in range(n)]


print("Matriks A")
for i in range(n):
    A[i] = list(map(int, input().split()))

print("Matriks B")
for i in range(n):
    B[i] = list(map(int, input().split()))

for i in range(n):
    for j in range(n):
        C[i][j] = sum(A[i][k] * B[k][j] for k in range(n))

print("Matriks AXB")
for i in range(n):
    for j in range(n):
        print(C[i][j], end=' ')
    print()