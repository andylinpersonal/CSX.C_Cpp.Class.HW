summ = 0
average = 0
cnt = 0
maxi = [0,0]
while True:
    num = eval(input())
    if num != -1:
        cnt += 1
        summ += num
        if num >= maxi[0]:
            maxi[0] = num
            maxi[1] = cnt
    else:
        break
print(summ)
print(summ/cnt)
print(maxi[0])
print(maxi[1])
