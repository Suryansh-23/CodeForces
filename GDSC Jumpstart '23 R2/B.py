n, m = list(map(int, input().split()))
l, r = list(map(int, input().split()))

for _ in range(m - 1):
    a, b = list(map(int, input().split()))

    if a >= l:
        if r >= a:
            l = a
        else:
            print(0)
            break
    if b <= r:
        if l <= b:
            r = b
        else:
            print(0)
            break
else:
    print(r - l + 1)
