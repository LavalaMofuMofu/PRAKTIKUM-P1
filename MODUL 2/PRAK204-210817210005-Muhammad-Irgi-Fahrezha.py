pi = float(22/7)
angka = []
while True:
    line = input()
    if not line:
        break
    angka.extend(line.split())

angka = list(map(float, angka))

r, t = angka

volume = pi * r * r * t
luas = 2 * pi * r * (r + t)
keliling = 2 * pi * r

print (f"Volume = {volume:.2f}")
print (f"Luas = {luas:.2f}")
print (f"Keliling = {keliling:.2f}")