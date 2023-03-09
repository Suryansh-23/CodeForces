n = int(input())
a = list(map(int, input().split()))
a.sort()

mtp = 0
mtime = float("inf")
for i in range(n - 1):
    tmp = abs(a[i] - a[i + 1])
    if tmp < mtime:
        mtime = tmp
        mtp = 1
    elif tmp == mtime:
        mtp += 1

print(mtime, mtp)
