n = int(input())

for i in range(2, n + 1):
    for j in range(i - 1, 1, -1):
        if i % j == 0:
            break
    else:
        print('%d is prime'%i)
