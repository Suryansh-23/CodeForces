def gap(n, i, j):
    return min(abs(i - j) - 1, n - max(i, j) + min(i, j) - 1)


for _ in range(int(input())):
    n, m = list(map(int, input().split()))
    f = list(map(int, input().split()))
    f.sort()

    if n == m:
        print(n)
        continue
    if m == 1:
        print(n - 2)
        continue
    if m == 2:
        print(
            n
            - max(abs(f[0] - f[-1]) - 1, n - max(f[0], f[-1]) + min(f[0], f[-1]) - 1)
            + 1
        )
        continue
    else:
        gaps = []
        for i in range(m - 1):
            tmp = gap(n, f[i], f[i + 1])
            if tmp > 0:
                gaps.append((tmp, f[i], f[i + 1]))
        if m > 2:
            tmp = n - max(f[0], f[-1]) + min(f[0], f[-1]) - 1
            if tmp > 0:
                gaps.append((tmp, f[0], f[-1]))
        gaps.sort(key=lambda x: x[0])

        fs = len(f)
        mx = max([i[0] for i in gaps])

        if mx <= 2:
            print(n - 1)
            continue

        sf = 0
        while len(gaps) > 0:
            sf += gaps[-1][0] - 2
            gaps.pop()
            i = 0
            while len(gaps) > 0 and gaps[i][0] <= 2:
                print(gaps)
                gaps.pop(i)

        print(n - sf)
