import math as m

for _ in range(int(input())):
    h, x, y, z = list(map(int, input().split()))

    ax = (x - (h % x)) % x
    ay = (y - (h % y)) % y
    az = (z - (h % z)) % z

    print(min(ax, ay, az))
