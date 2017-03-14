a = int(input())
b = int(input())
c = int(input())

if a > b:
    if c > a:
        print(c)
    else:
        print(a)
else:
    if b > c:
        print(b)
    else:
        print(c)
