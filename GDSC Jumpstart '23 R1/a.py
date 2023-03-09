n = int(input())
d2 = []
for _ in range(n):
    d2.append(list(map(int, input().split())))

if n == 1:
    print(d2[0][0])
else:
    print(d2[0][0] + d2[0][n - 1] + d2[n - 1][0] + d2[n - 1][n - 1])
