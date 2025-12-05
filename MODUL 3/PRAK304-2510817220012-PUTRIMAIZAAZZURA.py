bilangan = int(input())

if bilangan == 0: print("Nol")
elif 1 <= bilangan < 10: print("Satuan")
elif bilangan == 10 or 20 <= bilangan < 100: print("Puluhan")
elif 11 <= bilangan < 20: print("Belasan")
else: print("Anda Menginput Melebihi Limit Bilangan")