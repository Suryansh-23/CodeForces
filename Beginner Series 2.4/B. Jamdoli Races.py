n = int(input())
mp = {}
for _ in range(n):
    tmp = input()
    mp[tmp] = mp.get(tmp, 0) + 1

keys = list(mp.keys())
mx = mp[keys[0]]
team = keys[0]
for k, v in mp.items():
    if v > mx:
        mx = v
        team = k

print(team)
