n = int(input())
a = list(map(int, input().split()))

mx = float("inf")
minn = mx
min_tmp = mx
for i in range(n):
    if minn > 0:
        minn = a[i]
    else:
        minn += a[i]

    min_tmp = min(min_tmp, minn)

print(min_tmp)
