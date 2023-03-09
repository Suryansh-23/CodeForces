n, d = map(int, input().split())
sm = 0
sc = 0
u = []
mp = {"A": 10, "AB": 9, "B": 8, "BC": 7, "C": 6, "CD": 5, "D": 4, "F": 0}

for _ in range(n):
    c, g = input().split()
    c = int(c)
    if g == "?":
        u.append((c, g))
    else:
        sm += c * mp[g]
        sc += c
    
    
