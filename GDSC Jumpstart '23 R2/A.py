for _ in range(int(input())):
    a, b, c, d = list(map(int, input().split()))
    cnt = 0
    if b > a:
        cnt += 1
    if c > a:
        cnt += 1
    if d > a:
        cnt += 1
    print(cnt)
