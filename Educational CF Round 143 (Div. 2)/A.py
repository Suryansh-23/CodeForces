def check_beauty(s: str):
    # check if the string is beautiful if the alternate characters are different
    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            return i
    return 0


for _ in range(int(input())):
    n, k = map(int, input().split())
    s1 = input()
    s2 = input()

    s1b = check_beauty(s1)
    s2b = check_beauty(s2)
    if not s1b and not s2b:
        print("YES")
    elif not s1b:
        if not check_beauty(s2[s2b:]) and s2[-1] != s1[-1]:
            print("YES")
        else:
            print("NO")
    elif not s2b:
        if not check_beauty(s1[s1b:]) and s1[-1] != s2[-1]:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
