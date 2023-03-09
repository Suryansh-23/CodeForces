from collections import defaultdict

for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    cl = [0] * 26
    cu = [0] * 26
    b = 0

    for i in s:
        if i.isupper():
            cu[ord(i) - ord("A")] += 1
        else:
            cl[ord(i) - ord("a")] += 1

    for i in range(26):
        m = min(cl[i], cu[i])
        cl[i] -= m
        cu[i] -= m
        b += m

        if cl[i] > 0:
            m = min(cl[i] // 2, k)
            cl[i] -= 2 * m
            k -= m
            b += m
        if cu[i] > 0:
            m = min(cu[i] // 2, k)
            cu[i] -= 2 * m
            k -= m
            b += m

    print(b)
    # print(cu, cl)
