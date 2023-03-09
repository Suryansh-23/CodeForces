t = int(input())
for _ in range(t):
    n, k = list(map(int, input().split()))
    health = list(map(int, input().split()))
    power = list(map(int, input().split()))

    while k > 0 and len(health) > 0:

        i = 0
        while i < len(health):
            if health[i] > k:
                health[i] -= k
                i += 1
            else:
                health.pop(i)
                power.pop(i)

        if len(power) == 0:
            break
        min_p = min(power)
        k -= min_p

    if len(health) == 0:
        print("YES")
    else:
        print("NO")
