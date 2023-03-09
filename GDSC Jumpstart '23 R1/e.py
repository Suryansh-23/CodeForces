n = int(input())
l = []
mx = 0
for _ in range(n):
    tmp = input().split()
    mx = max(mx, len(tmp[1]))
    n, i = tmp[0], int(tmp[1])
    l.append((n, i))


# def bubbleSort(arr):
#     n = len(arr)

#     # Traverse through all array elements
#     for i in range(n):

#         # Last i elements are already in place
#         for j in range(0, n - i - 1):

#             # traverse the array from 0 to n-i-1
#             # Swap if the element found is greater
#             # than the next element
#             if arr[j] > arr[j + 1]:
#                 arr[j], arr[j + 1] = arr[j + 1], arr[j]

l.sort(key=lambda x: x[0][0] + (mx - len(str(x[1]))) * "0" + str(x[1]))
for i in l:
    print(i[0])
