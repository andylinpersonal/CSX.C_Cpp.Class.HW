answer = int(input())
cnt = 0
guess = 0
maxb = 100
minb = 1
while True:
    print('%d < ? < %d'%(minb, maxb))
    guess = int(input())
    if guess == answer:
        print('bingo answer is %d'%answer)
        break
    else:
        if answer < guess <= maxb:
            if guess < maxb:
                maxb = guess
            print('wrong answer, guess smaller')
        else:
            if guess > minb:
                minb = guess
            print('wrong answer, guess larger')
