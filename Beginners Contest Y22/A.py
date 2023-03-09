n = int(input())
nums = list(map(int, input().split()))

if sum(nums) == 0:
    print("YES")
else:
    print("NO")
