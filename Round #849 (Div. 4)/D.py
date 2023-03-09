for _ in range(int(input())):
    n = int(input())
    f = input()
    # s = set()

    # i = 0
    # while i < n:
    #     if f[i] in s:
    #         break
    #     else:
    #         s.add(f[i])
    #     i += 1

    # cnt = len(s)
    # # print(i, s)
    # s.clear()

    # for j in range(i, n):
    #     s.add(f[j])

    # print(cnt + len(s))
    mp1 = {}
    mp2 = {}
    mx = 0
    for i in f:
        if i not in mp2:
            mx += 1
            mp2[i] = 1
        else:
            mp2[i] += 1

    for i in f:
        if mp2[i] == 1:
            mp2.pop(i)
        else:
            mp2[i] -= 1
        mp1[i] = mp1.get(i, 0) + 1
        mx = max(mx, len(mp1) + len(mp2))

    print(mx)
