num = int(input())
chrlst = ['','壹','貳','參','肆','伍','陸','柒','捌','玖']
digilst = ['','拾','佰','仟','萬']
numlst = []

def dbgprint(anything = None):
    print('%r'%anything)

if 1 <= num <= 99999:

    flag = num
    while True:
        numlst.append(flag % 10)
        flag = flag // 10
        if flag == 0:
            break
    flag = int(len(numlst))
    for i in range(len(numlst), 0, -1):
        if i != 0:
            print(chrlst[numlst[(i - 1)]], end = '')
            print(digilst[(i-1)], end = '')
    else:
        print('元整')
