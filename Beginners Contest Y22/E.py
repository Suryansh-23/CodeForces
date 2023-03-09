def sieve(n):
    primes = [True] * n

    for i in range(2, int(n**0.5) + 1):
        if primes[i]:
            for j in range(i**2, n, i):
                primes[j] = False

    return {i for i in range(2, n) if primes[i]}


s = sieve(10**6 + 4)
for _ in range(int(input())):
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    m = max(a)

    for i in range(n):
        if a[i] not in s:
            j = a[i] + 1
            while j not in s:
                j += 1

            k = a[i] - 1
            while k not in s and k >= 3:
                k -= 1

            # print(min(j - a[i], a[i] - k))
            q -= min(j - a[i], a[i] - k)

        if q < 0:
            break

    if q < 0:
        print("NO")
    else:
        print("YES")
