n = 6
k = [('  '*(n-i)+'* '*(2*i-1))for i in range(1, n+1)]
print(*k, *k[n-2::-1], sep='\n')
# k = []
# [k.append('  '*(n-i)+''.join(list([i])*(2*i-1)))for i in range(1,n+1)]
# print(*k,sep='\n')
# res,start,ch='',' a ',ord('a')
# for i in range(1,n+1):
#     # k = (2*i-1)
#     ch+=1
#     start=start.replace(' ',chr(ch))
#     print(start)
#     start=' '*(n-i)+start
#     res+=start
