n, x = map(int, input().split())

for i in range(64):
    if (x & (1 << i)) == 0:
        n -= 1
        x = x | (1 << i)
    if n == 0:
        break

print(x)
