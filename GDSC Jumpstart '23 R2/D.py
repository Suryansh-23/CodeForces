for _ in range(int(input())):
    n, e = list(map(int, input().split()))
    l = list(map(int, input().split()))

    mp = {}
    a = []

    for i in l:
        mp[i] = mp.get(i, 0) + 1

    for k, v in mp.items():
        if v >= e:
            a.append(k)

    if len(a) <= 1:
        print(-1)
        continue

    a.sort()
