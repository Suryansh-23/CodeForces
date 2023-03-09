n, k = list(map(int, input().split()))
a = list(map(int, input().split()))
b = list(map(int, input().split()))
s = sum(a)

if n == k:
    print(s)
else:
    diff = [(b[i] - a[i], i) for i in range(n)]
    diff.sort(key=lambda x: x[0])

    for i in diff[: n - k]:
        if i[0] <= 0:
            s += i[0]
        else:
            break
    print(s)
    # print(s + sum([i[0] for i in diff[: n - k]]))
