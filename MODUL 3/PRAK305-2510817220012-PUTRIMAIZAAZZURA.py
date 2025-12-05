detik = int(input())

hari = detik // 86400
jam = (detik % 86400) // 3600
menit = (detik % 3600) // 60
detik = detik % 60

if hari > 0: print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
else :  print(f"{jam:02}:{menit:02}:{detik:02}")