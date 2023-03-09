for _ in range(int(input())):
    a = [[] for _ in range(8)]
    for i in range(8):
        a[i] = input()

    pos = 0
    ki = kj = 0
    for i in range(8):
        flag = False
        for j in range(8):
            if a[i][j] == "K":
                ki = i
                kj = j
                flag = True
                break

        if flag:
            break

    for j in range(kj - 1, -1, -1):
        if a[ki][j] == ".":
            # print(ki, j)
            pos += 1
        else:
            break

    for j in range(kj + 1, 8):
        if a[ki][j] == ".":
            # print(ki, j)
            pos += 1
        else:
            break

    for i in range(ki - 1, -1, -1):
        if a[i][kj] == ".":
            # print(i, kj)
            pos += 1
        else:
            break

    for i in range(ki + 1, 8):
        if a[i][kj] == ".":
            # print(i, kj)
            pos += 1
        else:
            break

    # print("----", pos, "-----")

    i = ki - 1
    j = kj - 1
    # print("#", i, j)
    while i >= 0 and j >= 0:
        if a[i][j] == ".":
            # print(i, j)
            pos += 1
        else:
            break

        i -= 1
        j -= 1

    i = ki + 1
    j = kj + 1
    while i < 8 and j < 8:
        # print("$$", i, j)
        if a[i][j] == ".":
            pos += 1
        else:
            break

        i += 1
        j += 1

    i = ki - 1
    j = kj + 1
    while i >= 0 and j < 8:
        if a[i][j] == ".":
            # print(i, j)
            pos += 1
        else:
            break

        i -= 1
        j += 1

    i = ki + 1
    j = kj - 1
    while i < 8 and j >= 0:
        if a[i][j] == ".":
            # print(i, j)
            pos += 1
        else:
            break

        i += 1
        j -= 1

    print(pos)
