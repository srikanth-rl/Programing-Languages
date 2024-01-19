from collections import Counter as c
for i in range(int(input())):
    n = sorted(c(input()).items(),key=lambda x:x[0])
    m = dict(sorted(c(input()).items(),key=lambda x:x[0]))
    co,flag = 0,True
    if len(n)==len(m):
        for i in n:
            if i[0] in m.keys():
                j = m[i[0]]
                co+=j-i[1]
            else:
                print('IMPOSSIBLE')
                flag = False
                break
        if flag:
            print(co)
    else:print('IMPOSSIBLE')