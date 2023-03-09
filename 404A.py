n = int(input())
arr = []
for _ in range(n):
    arr.append(input())

diag = arr[0][0]
fill = arr[0][1]
chk = True
if diag == fill:
    chk = False

if chk:
    for i in range(n):
        if arr[i][i] != diag:
            chk = False
            break

if chk:
    for i in range(n):
        if arr[i][n - i - 1] != diag:
            chk = False
            break

if chk:
    for i in range(0, n // 2):
        for j in range(i + 1, n - i - 1):
            if arr[i][j] != fill or arr[j][i] != fill:
                chk = False
                break

if chk:
    for i in range(n // 2 + 1, n):
        for j in range(n - i, i):
            if arr[i][j] != fill or arr[j][i] != fill:
                chk = False
                break

if chk:
    print("YES")
else:
    print("NO")
