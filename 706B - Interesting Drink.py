n = int(input())
a = [0] * 100_000

for i in map(int, input().split()):
    a[i - 1] += 1

for i in range(1, 100_000):
    a[i] += a[i - 1]

for _ in range(int(input())):
    tmp = int(input())
    if tmp >= 100_000:
        print(n)
    else:
        print(a[tmp - 1])
