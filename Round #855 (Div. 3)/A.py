for _ in range(int(input())):
    n = int(input())
    s = input().lower()

    if s[0] != "m":
        print("NO")
        continue

    tmp = s[0]
    a = ""
    for i in range(1, n):
        if s[i] != tmp:
            a = a + tmp
            tmp = s[i]
    a += tmp

    print("YES" if a == "meow" else "NO")
