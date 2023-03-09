n, m = list(map(int, input().split()))
gph = {}
for _ in range(m):
    b1, b2, si = list(map(int, input().split()))
    gph[b1] = gph.get(b1, []) + [(b2, si)]

q = int(input())
qs = []
for _ in range(q):
    qs.append(list(map(int, input().split())))


vis = set()


def dfs(n, m, s=None):
    print(n)
    vis.add(n)
    for i in gph[n]:
        if i[0] not in vis:
            dfs(i[0], 0, 0)


dfs(1, 0, 0)
