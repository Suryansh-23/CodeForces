def distinct(arr) -> int:
    return len(set(arr))


t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    l = 0
    r = n - 1
    m = r - l - distinct(arr)
    while l != r and (l + 1) != r:
        # print(m)
        ld = r - l - 1 - distinct(arr[l + 1 : r + 1])
        rd = r - l - 1 - distinct(arr[l:r])
        lr = r - l - 2 - distinct(arr[l + 1 : r])

        if ld >= m:
            m = ld
            l += 1
        elif rd >= m:
            m = rd
            r -= 1
        elif lr >= m:
            m = lr
            l += 1
            r -= 1
        else:
            break

    print(l + 1, r + 1)
