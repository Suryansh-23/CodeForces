t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    mp = dict(map(lambda x: (x, True), arr))

    arr.sort()
    i = 0
    while i < len(arr):
        j = len(arr) - 1
        while j > i:
            tmp = arr[j] - arr[i]
            # print(arr[i], arr[j], arr, tmp, mp)
            if tmp not in mp:
                mp[tmp] = True
                arr.insert(j, tmp)
            else:
                j -= 1
        i += 1

    print(len(arr))
