char = ''
score = 0
while True:
    score = int(input())
    if score >= 60:
        print('pass')
    else:
        print('fail')
    char = input()
    if char != 'y':
        break
