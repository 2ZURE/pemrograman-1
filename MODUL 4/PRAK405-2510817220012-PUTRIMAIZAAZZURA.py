baris, kelipatan = map(int, input().split())
total = 0

for i in range(1, baris + 1, 1):
    jumlah = 0

    print("(", end="")
    for j in range(i, 0, -1): 
        jumlah += j * kelipatan
        print(f"{j} * {kelipatan}" , end="")

        if j > 1: print(") + (", end="")

    print(f") = {jumlah}")
    total += jumlah
print(f"{total}")
    
    