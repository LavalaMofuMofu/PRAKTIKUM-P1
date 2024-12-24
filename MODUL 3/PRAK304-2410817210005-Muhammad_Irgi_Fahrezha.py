bilangan = int(input())

if bilangan >= 1 and bilangan <= 9:
    print("Satuan")

elif bilangan >= 11 and bilangan <= 19:
    print("Belasan")

elif bilangan >= 20 and bilangan <= 99 or bilangan == 10:
    print("Puluhan")

elif bilangan == 0:
    print("Nol")

else: 
    print("Anda Menginput Melebihi Limit Bilangan")