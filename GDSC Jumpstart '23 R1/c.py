n, c = list(map(int, input().split()))
cs = list(map(int, input().split()))

# mx = 0
# t = 0
# for i in range(n - 1):
#     print(cs[i], i, mx)
#     if cs[i] == cs[i + 1]:
#         if i < n - 2:
#             t = int(cs[i] == cs[i + 2])
#         else:
#             t = 0
#     else:
#         t += 1
#     mx = max(t, mx)


def lengthOfLongestSubstring(s: str) -> int:
    # Base Case
    if len(s) == 1:
        return 1

    count, s_result = 0, 2

    for i in s:
        if i not in s_result:
            s_result += i
        else:
            s_result = s_result[s_result.index(i) + 1 :] + i

        if len(s_result) > count:
            count = len(s_result)

    return count


t = cs.copy()
for i in range(n):
    # print(i)
    if 0 < i < n - 1:
        if cs[i] != cs[i + 1] and cs[i - 1] != cs[i]:
            t[i] = 2
        elif cs[i] != cs[i + 1] or cs[i - 1] != cs[i]:
            t[i] = 1
        else:
            t[i] = 0
    elif i == (n - 1):
        t[i] = int(cs[i] != cs[i - 1]) + 1
    else:
        t[i] = int(cs[i] != cs[i + 1]) + 1

print(t)
if t.count(2):
    mx = 0
    p1 = 0
    p2 = 1
    i = 0
    j = 0
    while p2 < n - 1:
        print(p1, p2, mx)
        if t[p2] == 2:
            p2 += 1
        else:
            p1 = p2
            p2 = p1 + 1
        if p2 - p1 - 1 > mx:
            mx = p2 - p1 - 1
            i = p1
            j = p2 - 1

    print(i, j)
    if i == 0:
        print(mx + 1)
    elif j == n - 2:
        # print("#")
        print(mx + 1)
    else:
        print(mx + 2)
    # print(mx)
else:
    print(0)
