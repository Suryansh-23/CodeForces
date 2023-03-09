import math

n, m = list(map(int, input().split()))
k = math.ceil(n / (2 * m))
x = n - m * k
y = 2 * m * k - n

if x < 0 or y < 0:
    print(-1)
else:
    print(x + y)
