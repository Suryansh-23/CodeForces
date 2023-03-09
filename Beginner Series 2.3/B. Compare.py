a = input()
b = input()

a = a.lstrip().lstrip("0")
b = b.lstrip().lstrip("0")

la = len(a)
lb = len(b)

if la > lb:
    print(">")
elif la == lb:
    i = 0
    while i < la:
        if a[i] != b[i]:
            if a[i] < b[i]:
                print("<")
                break
            else:
                print(">")
                break
        i += 1
    else:
        print("=")
else:
    print("<")
