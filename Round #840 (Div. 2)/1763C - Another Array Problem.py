t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    if n == 2:
        print(max(2 * abs(arr[0] - arr[1]), sum(arr)))
    elif n == 3:
        print(
            max(
                3 * abs(arr[0] - arr[1]),
                3 * abs(arr[2] - arr[1]),
                3 * arr[0],
                3 * arr[2],
                sum(arr),
            )
        )
    else:
        print(n * max(arr))
