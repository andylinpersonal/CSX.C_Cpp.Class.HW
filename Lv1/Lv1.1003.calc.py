def product(lst):
    init = 1
    if len(lst) == 0:
        return 0
    for i in range(len(lst)):
        init *= lst[i]
    else:
        return init

ls = []
ls.append(int(input()))
ls.append(int(input()))
ls.append(int(input()))

print('sum is %d'%sum(ls))
print('average is %.2f'%(sum(ls)/len(ls)))
print('product is %d'%product(ls))
print('smallest is %d'%min(ls))
print('largest is %d'%max(ls))
