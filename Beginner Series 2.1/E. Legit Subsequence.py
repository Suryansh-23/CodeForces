for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    if n == 3:
        print("YES") if a[0] == a[2] else print("NO")
        continue
    else:
        mp = {}
        for i in range(n):
            if a[i] not in mp:
                mp[a[i]] = i
                continue
            if i - mp[a[i]] > 1:
                print("YES")
                break
        else:
            print("NO")
