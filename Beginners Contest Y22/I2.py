def maxSubArraySum(a, n, w):

    max_so_far = -float("inf")
    max_ending_here = 0
    tmp = 0

    for i in range(n):
        max_ending_here = max_ending_here + a[i]
        if max_so_far < max_ending_here <= w:
            max_so_far = max_ending_here

        if max_ending_here < 0:
            max_ending_here = 0
    return max_so_far


for _ in range(int(input())):
    n, w = map(int, input().split())
    a = list(map(int, input().split()))

    print(maxSubArraySum(a, n, w))
