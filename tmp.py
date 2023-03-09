for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    ans = sum(l)
    if n == 2:
        ans = max(ans, 2 * abs(l[0] - l[1]))
    elif n == 3:
        lx = [l[0], l[2], abs(l[0] - l[1]), abs(l[1] - l[2]), abs(l[0] - l[2])]
        ans = max(ans, max(lx) * 3)
    else:
        ans = max(ans, max(l) * n)
    print(ans)
