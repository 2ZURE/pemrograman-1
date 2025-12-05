while (True):
    print("Pilih program")
    print("1. Pertambahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihan = int(input("Masukkan Pilihan : "))
    if pilihan == 5: break

    if pilihan > 5 or pilihan < 0: 
        print("Input anda salah, silahkan coba lagi")
        continue

    a = float(input("Masukkan nilai pertama : "))
    b = float(input("Masukkan nilai kedua : "))
        
    if pilihan == 1: 
        print(f"Hasil penjumlahan antara {a:.2f} dan {b:.2f} adalah {a + b:.2f}")
    elif pilihan == 2 :
        print(f"Hasil pengurangan antara {a:.2f} dan {b:.2f} adalah {a - b:.2f} ")
    elif pilihan == 3 :
        print(f"Hasil perkalian antara {a:.2f} dan {b:.2f} adalah {a * b:.2f} ")
    elif pilihan == 4 :
        if b != 0: print(f"Hasil pembagian antara {a:.2f} dan {b:.2f} adalah {a / b:.2f} ")
        else: print("Hasil pembagian tidak terdefinisi")

print("Terima kasih, telah menggunakan kalkulator Putri Maiza Azzura")