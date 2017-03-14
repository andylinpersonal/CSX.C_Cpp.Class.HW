roll = int(input())
sc = 0
IsOK = False
if 1 <= roll <= 2:
    sc = int(input())
    if not (0 <= sc <= 100):
        print('score error')
    else:
        IsOK = True
else:
    print('roll error')

if IsOK:
    if roll == 1:
        if sc >= 60:
            print('pass')
        else:
            print('fail')

    else:
        if sc >= 70:
            print('pass')
        else:
            print('fail')
