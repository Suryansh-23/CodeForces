# for _ in range(int(input())):
#     n = int(input())
#     a = list(map(int, input().split()))
#     b = [(i, a[i]) for i in range(n)]
#     b.sort(key=lambda x: abs(x[1]), reverse=True)

#     if n == 2:
#         if a[0] >= 0 and a[1] >= 0:
#             print(sum(a))
#         elif a[0] < 0 and a[1] < 0:
#             print(abs(a[0]) + abs(a[1]))
#         elif a[0] < 0 and a[1] >= 0:
#             if abs(a[0]) > a[1]:
#                 print(-a[0] - a[1])
#             else:
#                 print(a[0] + a[1])
#         else:
#             if abs(a[1]) > a[0]:
#                 print(-a[0] - a[1])
#             else:
#                 print(a[0] + a[1])
#         continue

#     for i in range(1, n - 1):
#         pass

#     print(sum(a))


def max_possible_sum(n, a):
    ans = 0
    for i in range(n - 1):
        if a[i] < 0 and a[i + 1] > 0:
            ans += -a[i] + a[i + 1]
            a[i + 1] = -a[i] - a[i + 1]
        else:
            ans += a[i]
    ans += a[n - 1]
    return ans


t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    a = list(map(int, input().strip().split()))
    print(max_possible_sum(n, a))
