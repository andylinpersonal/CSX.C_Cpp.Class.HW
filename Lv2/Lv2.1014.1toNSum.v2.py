n = int(input())
summ = 0
for i in range(1, n+1):
    summ += i
    if i < n:
        print('%d+'%i, end = '')
    else:
        print('%d = %d'%(i,summ))
        
