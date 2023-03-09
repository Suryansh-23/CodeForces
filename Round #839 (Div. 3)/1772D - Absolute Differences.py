import math as m


def is_sorted(arr):
    for i in range(1, len(arr)):
        if not (arr[i - 1] <= arr[i]):
            return False

    return True


t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    if is_sorted(arr):
        print(0)
        continue
    elif is_sorted(arr[::-1]):
        print(arr[0])
        continue
    else:
        x = ((min(arr) + max(arr)) // 2) + 1
        a = [abs(i - x) for i in arr]
        if is_sorted(a):
            print(x)
        else:
            print(-1)
