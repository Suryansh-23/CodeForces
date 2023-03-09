def solve_qaud(s):
    return (-1 + (1 + 8 * s) ** 0.5) / 2


for _ in range(int(input())):
    x, s = list(map(int, input().split()))
    a = set(map(int, input().split()))
    mx = max(a)
    miss = []

    for i in range(1, mx):
        if i not in a:
            miss.append(i)

    if sum(miss) > s:
        print("NO")
        continue
    elif sum(miss) == s:
        print("YES")
        continue
    else:
        # stmp = mx * (mx + 1) // 2
        n = solve_qaud(sum(a) + s)
        if n == int(n):
            print("YES")
        else:
            print("NO")
