def indcount(l: list):
    # this fn returns the index and the count of maximum element in a list
    mx = -1
    cnt = 0
    ind = -1
    for i in range(len(l)):
        if l[i] > mx:
            mx = l[i]
            cnt = 1
            ind = i
        elif l[i] == mx:
            cnt += 1

    return ind, mx, cnt


for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [0] * 50
    lims = []

    for _ in range(n):
        l, r = map(int, input().split())
        # b = a.copy()
        for i in range(l, r + 1):
            a[i - 1] += 1

        if not (l <= k <= r):
            lims.append((l, r))
        # print("##", b)
        # ind, cnt = indcount(b)
        # if ind == k - 1 and cnt == 1:
        #     a = b.copy()

    ind, mx, cnt = indcount(a)
    # print(a, lims, ind, mx, cnt)
    if ind == k - 1 and cnt == 1:
        print("YES")
    else:
        for i in lims:
            # print(a)
            for j in range(i[0], i[1] + 1):
                a[j - 1] -= 1

        ind, mx, cnt = indcount(a)
        if ind == k - 1 and cnt == 1:
            print("YES")
        else:
            print("NO")
