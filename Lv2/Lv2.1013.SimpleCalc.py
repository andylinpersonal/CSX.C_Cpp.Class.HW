
a = eval(input())
b = eval(input())
sym = input()
print('%.2f %s %.2f = '%(a, sym, b), end = '')

if sym == '/':
    print('%.2f'%(a/b))
elif sym == '*':
    print('%.2f'%(a*b))
elif sym == '+':
    print('%.2f'%(a+b))
elif sym == '-':
    print('%.2f'%(a-b))
else:
    print('')
