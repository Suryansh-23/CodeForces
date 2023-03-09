a = [0] * (10**6)
n = int(input())
w = list(map(int, input().split()))

idx = 0
for i in range(n):
    for j in range(idx, idx + w[i]):
        a[j] = i + 1
    idx += w[i]

int(input())
q = list(map(int, input().split()))
for i in q:
    print(a[i - 1])
