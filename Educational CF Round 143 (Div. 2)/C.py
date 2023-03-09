for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = []
    for i in range(n):
        c.append(min(a[i], b[i]))
        a[i] -= min(a[i], b[i])

    # for i in range(n):
    #     # print(a, c)
    #     for j in range(n - i):
    #         # print(j, i + j)
    #         c[i + j] += min(a[j], b[i + j])
    #         a[j] -= min(a[j], b[i + j])

    # for i in c:
    #     print(i, end=" ")

    # print()

    for i in range(1, n):
        print(a, c)
        c[i] += min(a[i - 1], b[i])
        a[i] -= min(a[i - 1], b[i])

    for i in c:
        print(i, end=" ")
    print()
