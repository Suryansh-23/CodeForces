n = int(input())
mak = list(map(int, input().split()))

ct = 0
for i in range(1, n):
    lcit = True
    mcit = True
    for j in range(i):
        if mak[i] <= mak[j]:
            mcit = False

        if mak[i] >= mak[j]:
            lcit = False

        if not lcit and not mcit:
            break

    if lcit:
        ct += 1
    if mcit:
        ct += 1

print(ct)
