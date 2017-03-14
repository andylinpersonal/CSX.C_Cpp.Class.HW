num = int(input())
str_x = ['', 'one ', 'two ', 'three ', 'four ',
         'five ', 'six ', 'seven ', 'eigtht ', 'nine ']
str_1x = {10:'ten ', 11:'eleven ', 12:'twelve ', 13:'thirteen ', 14:'fourteen ',
          15:'fifteen ', 16:'sixteen ', 17:'seventeen ', 18:'eighteen ',
          19:'nineteen '}
str_x0 = ['', '', 'twenty ', 'thirty ', 'forty ', 'fifty ', 'sixty ', 'seventy ',
          'eighty ', 'ninety ']
str_x00 = 'hundred '
str_exp = ['','thousand ', 'million ']

def dbg_print(anything = None):
    print('%r'%anything)
    return

def dbg_dummy():
    return

if 1 < num < 10000000:
    numlst = []
    flag = num
    group = 0
    #Teardown a number
    while True:
        numlst.append(flag % 10)
        flag = flag // 10
        if flag == 0:
            break
    #group number
    group = int(len(numlst) // 3)
    last = int(len(numlst) % 3)
    
    if last != 0:
        group += 1
    else:
        last = 3
    #print the string
    for i in range(group, 0, -1):
        while last > 0:
            if last == 3:
                print(str_x[numlst[(group - 1)*3 + last - 1]], end = '')
                print(str_x00, end = '')
            elif last == 2:
                if numlst[(group - 1)*3 + last - 1] == 1:
                    tmp = numlst[(group - 1)*3 + last - 1] * 10
                    last -= 1
                    tmp += numlst[(group - 1)*3 + last - 1]
                    print(str_1x[tmp], end = '')
                else:
                    print(str_x0[numlst[(group - 1)*3 + last - 1]], end = '')
            elif (last == 1) and (numlst[(group - 1)*3 + last - 1] != 0):
                print(str_x[numlst[(group - 1)*3 + last - 1]], end = '')
            last -= 1
        else:
            print('%s'%str_exp[group - 1], end = '')
            last = 3
            group -= 1
    print('dollars')
    
elif num == 1:
    print('one dollar')
    
else:
    print('Error input')

