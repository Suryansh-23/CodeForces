for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    q = int(input())
    qs = dict()
    for _ in range(q):
        x, k = tuple(map(int, input().split()))
        qs[k] = qs.get(k, []) + [(x, k)]
