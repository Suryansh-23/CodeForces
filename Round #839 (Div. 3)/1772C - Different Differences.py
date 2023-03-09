import math as m

t = int(input())
for _ in range(t):
    k, n = list(map(int, input().split()))

    if k == n:
        list(map(lambda x: print(x, end=" "), range(1, n + 1)))
        print()
        continue

    avail_k = int(m.log2(n))
    if k - 1 > avail_k:
        needed = k - avail_k - 1
        arr = [2**i for i in range(avail_k + 1)]
        if n % 2 == 0:
            pass
        for i in range():
            pass
    else:
        for i in range(k):
            print(2**i, end=" ")

    print()
