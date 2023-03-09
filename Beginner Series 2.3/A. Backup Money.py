n, r = list(map(int, input().split()))
print(r // n + (1 if r % n else 0))
