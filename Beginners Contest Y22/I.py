for _ in range(int(input())):
    n, w = map(int, input().split())
    a = list(map(int, input().split()))

    m = min(a)
    if m > w:
        print(0)
        continue
    elif m == w:
        print(1)
        continue

    pre = []
    s = 0
    for i in range(n):
        s += a[i]
        pre.append(s)

    print(pre)
    # select a subarray from a[i] to a[j] such that sum of elements in the subarray is less than or equal to w

    # m = 0
    # for i in range(n):
    #     s = a[i]
    #     j = i + 1
    #     while j < n and s <= w:
    #         s += a[j]
    #         j += 1

    #     if s <= w:
    #         m = max(m, j - i)
    #     else:
    #         m = max(m, j - i - 1)
    # print(i, j, m, s)

    print(m)
