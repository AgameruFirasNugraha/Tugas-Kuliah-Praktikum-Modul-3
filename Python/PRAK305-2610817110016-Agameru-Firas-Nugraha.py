sec = int(input())

hari = sec // 86400
sec %= 86400
jam = sec // 3600
sec %= 3600
menit = sec // 60
detik = sec % 60

if hari > 0:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")