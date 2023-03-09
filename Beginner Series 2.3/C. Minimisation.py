import math as m

mp = {}
char2b = {
    "A": 4,
    "B": 2,
    "C": 1,
    "AB": 6,
    "BA": 6,
    "AC": 5,
    "CA": 5,
    "BC": 3,
    "CB": 3,
    # "ABC": 7,
    # "ACB": 7,
    # "BAC": 7,
    # "BCA": 7,
    # "CAB": 7,
    # "CBA": 7,
}
cost = m.inf
n = int(input())
for _ in range(n):
    tmp = input().split()
    pi, si = int(tmp[0]), tmp[1]

    if len(si) < 3:
        mp[char2b[si]] = min(mp.get(char2b[si],m.inf), pi)
    else:
        cost = min(cost, pi)  # 3

keys = list(mp.keys())
singles = [i for i in [4, 2, 1] if i in mp]
doubles = [i for i in [6, 5, 3] if i in mp]
# 1+2 && 2 + 2
for i in keys:
    for j in keys:
        if (i | j) == 7:
            # print(i, j, mp[i] + mp[j])
            cost = min(cost, mp[i] + mp[j])

# 1+1+2
for i in singles:
    for j in singles:
        for k in doubles:
            if (i | j | k) == 7:
                # print(i, j, k, mp[i] + mp[j] + mp[k])
                cost = min(cost, mp[i] + mp[j] + mp[k])


# 1+1+1
if 4 in mp and 2 in mp and 1 in mp:
    cost = min(cost, mp[4] + mp[2] + mp[1])

if m.isinf(cost):
    print(-1)
else:
    print(cost)
