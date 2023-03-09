n = int(input())
s = input()
idx = []
for i in range(n):
    if s[i] == "b":
        idx.append(i)

if len(idx) == 0:
    print(n if s.find("a") != -1 else 0)
else:
    a = 0
    if idx[0] == 0:
        idx.pop(0)
    else:
        for i in range(idx[0]):
            if s[i] == "a":
                a += idx[i]
                break

    for i in range(len(idx) - 1):
        for j in range(idx[i] + 1, idx[i + 1]):
            if s[j] == "a":
                a += idx[i + 1] - idx[i] - 1
                break

    if idx[-1] != n - 1:
        for i in range(idx[-1] + 1, n):
            if s[i] == "a":
                a += n - idx[-1] - 1
                break

    # print(idx)
    print(a)
