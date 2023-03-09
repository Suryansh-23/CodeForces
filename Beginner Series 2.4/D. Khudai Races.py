n, q = list(map(int, input().split()))
e = list(map(int, input().split()))
h = list(map(int, input().split()))

wks = e.copy()
for i in h:
    # print("$$$", i)
    while len(wks) > 0 and i > 0:
        if wks[0] > i:
            wks[0] -= i
            i = 0
            print(len(wks))
            break
        elif wks[0] == i:
            wks.pop(0)
            i = 0
            if len(wks) != 0:
                print(len(wks))
            break
        else:
            # print("#", wks[0])
            i -= wks[0]
            wks.pop(0)
    if len(wks) == 0:
        print(n)
        wks = e.copy()
        continue
    # print("end:", wks)
    # print()
