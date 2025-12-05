def maksimal(a, b):
    if a < b: return b
    else: return a

def minimal(a, b):
    if a > b: return b
    else: return a

bilangan = int(input())
angka_list = list(map(int, input().split()))

maks = angka_list[0]
minim = angka_list[0]

for nilai in angka_list[1:]:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(maks, minim)
