n = int(input())
pbs = list(map(int, input().split()))

print(sum(pbs) - n * min(pbs))
