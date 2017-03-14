num = int(input())

for i in range(num - 1, 1, -1):
    if (num % i == 0):
        print('%d is not prime'%num)
        break
else:
    print('%d is prime'%num)
