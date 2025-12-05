tinggi, hipotenusa = map(int, input().split())
alas = ((hipotenusa ** 2) - (tinggi ** 2)) ** 0.5
print("Alas = %d cm" %alas)
print("Tinggi = %d cm" %(tinggi))
print("Keliling = %d cm" %(alas + tinggi + hipotenusa))
print("Luas = %d cm^2" %(0.5 * alas * tinggi))

tinggi = int(input())
hipotenusa = int(input())
alas = ((hipotenusa ** 2) - (tinggi ** 2)) ** 0.5
print("Alas = %d cm" %alas)
print("Tinggi = %d cm" %(tinggi))
print("Keliling = %d cm" %(alas + tinggi + hipotenusa))
print("Luas = %d cm^2" %(0.5 * alas * tinggi))