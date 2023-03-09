n, m = list(map(int, input().split()))
arr = []
for _ in range(n):
    arr.append(tuple([int(i) for i in input()]))

gs = set()
for j in range(m):
    tmp = str(max([arr[i][j] for i in range(n)]))
    s = "".join([str(arr[i][j]) for i in range(n)])
    # print(s, str(max([arr[i][j] for i in range(n)])))
    for k in range(n):
        if s[k] == tmp:
            gs.add(k)


print(len(gs))
