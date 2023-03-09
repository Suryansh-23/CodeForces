class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def gen(t, a, b, n, prev=0, i=1):
    if prev == 0:
        t.left = TreeNode(b[i])
        if i + 1 < n:
            t.right = TreeNode(max(a[i + 1], b[i + 1]))
            gen(t.right, a, b, n, t.right.val == a[i + 1], i + 1)
        gen(t.left, a, b, n, prev=1, i=i + 1)
    else:
        t.left = TreeNode(a[i])
        if i + 1 < n:
            t.right = TreeNode(max(a[i + 1], b[i + 1]))
            gen(t.right, a, b, n, i + 1)
        gen(t.left, a, b, n, prev=0, i=i + 1)


n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

if n == 1:
    print(max(a[0], b[0]))
elif n == 2:
    print(max(a[0] + b[1], b[0] + a[1]))
else:
    t = TreeNode(max(a[0], b[0]))
    gen(t, a, b)
