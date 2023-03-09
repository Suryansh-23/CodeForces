import sys


def pr(x):
    print(x)
    sys.stdout.flush()


n = int(input())
if n % 3 == 0:
    print("NO")
else:
    print("YES")
    while n > 2:
        if n == 4:
            pr(1)
            n -= 1
            n -= int(input())
            pr(n)
            exit()
        if n == 5:
            pr(2)
            n -= 2
            n -= int(input())
            pr(n)
            exit()

        if n % 3 == 1:
            pr(1)
            n -= 1
        else:
            pr(2)
            n -= 2
        n -= int(input())
    pr(n)
