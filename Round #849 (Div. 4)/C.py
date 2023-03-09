for _ in range(int(input())):
    n = int(input())
    s = input()

    i = 0
    l = n
    while i < n // 2:
        if s[i] != s[n - i - 1]:
            i += 1
            l -= 2
        else:
            break
    print(l)
