for _ in range(int(input())):
    n, k = list(map(int, input().split()))
    en_he = [(int(i),) for i in input().split()]
    i = 0
    for bi in input().split():
        en_he[i] = (*en_he[i], int(bi))
        i += 1

    en_he.sort(key=lambda x: x[0])
    i = 0
    while i < n and k >= en_he[i][0]:
        k += en_he[i][1]
        i += 1
    else:
        print(k)
