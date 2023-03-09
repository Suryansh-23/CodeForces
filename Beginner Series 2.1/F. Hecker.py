def get_score(s: str):
    score = int(s[0] == "W")
    for i in range(1, len(s)):
        if s[i] == "W" and s[i - 1] == "W":
            score += 2
        elif s[i] == "W":
            score += 1

    return score


for _ in range(int(input())):
    n, p = list(map(int, input().split()))
    s = input()
    ws = s.count("W")

    if p == 0:
        print(get_score(s))
        continue

    if ws + p >= n:
        print(2 * n - 1)
        continue
    if ws == 1:
        pass

    gaps = []
    last = -1
    for i in range(n):
        if s[i] == "W":
            if last == -1:
                pre = i
            else:
                gaps.append((i, i - last - 1))
            last = i
    post = last
    gaps.sort(key=lambda x: x[1])

    score = get_score(s)
