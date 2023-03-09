import math as m

n = int(input())
l = []
for _ in range(n):
    l.append(int(input()))

flag = True
for i in range(n):
    if l[i] % 2 == 0:
        l[i] //= 2
    else:
        if flag:
            l[i] = m.floor(l[i] / 2)
            flag = False
        else:
            l[i] = m.ceil(l[i] / 2)
            flag = True

for i in l:
    print(i)
