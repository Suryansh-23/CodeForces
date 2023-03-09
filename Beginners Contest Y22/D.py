for _ in range(int(input())):
    n, q = map(int, input().split())
    arr = [0] * (n + 1)

    for _ in range(n):
        a, b = map(int, input().split())
        arr[a] = b

    for _ in range(q):
        s = 0
        l, r = map(int, input().split())
        for i in range(l, r + 1):
            s += arr[i] * i
        print(s)
