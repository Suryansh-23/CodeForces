a = list(input())
b = list(input())
b.sort()
mp = {}
s = set()

# print(a, b)
i = 0
j = 0
while i < len(a) and j < len(b):
    # print(i, j)
    if a[i] in mp:
        a[i] = mp[a[i]]
        i += 1
        continue
    if a[i] > b[j]:
        if b[j] in s:
            j += 1
            continue
        mp[a[i]] = b[j]
        a[i] = b[j]
        s.add(b[j])
        i += 1
        j += 1
    else:
        i += 1

print("".join(a))
