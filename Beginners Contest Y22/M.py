import math as m


def sieve(n):
    primes = [True] * n

    for i in range(2, int(n**0.5) + 1):
        if primes[i]:
            for j in range(i**2, n, i):
                primes[j] = False

    return {i for i in range(2, n) if primes[i]}


s = sieve(10**6 + 1)
for _ in range(int(input())):
    n = int(input())
    if n in s:
        print(n - 1)
        continue

    for i in range(int(m.sqrt(n) + 1), 1, -1):
        print("#", i, n // i)
        if n % i == 0:
            print(n // i - i)
            break
