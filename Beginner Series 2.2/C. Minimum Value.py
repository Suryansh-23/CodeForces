import math as m

for _ in range(int(input())):
    n = int(input())
    print(2)

    res = n
    for i in range(n - 1, 0, -1):
        print(i, res)
        res = m.ceil((i + res) / 2)
