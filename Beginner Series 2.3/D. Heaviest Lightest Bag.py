import math as m

n, k = list(map(int, input().split()))
b = list(map(int, input().split()))
sb = sum(b)

if sb < k:
    print(-1)
elif sb == k:
    print(0)
else:
    b.sort()
    # print(b[0], n, i, k)
    if (sb - b[0] * n) >= k:
        print(b[0])
    else:
        k -= sb - (b[0] * n)
        print(b[0] - m.ceil(k / n))
