import numpy,itertools
from itertools import chain as Sri
sri,n = 'eyrmeyenjvmntoeo',4
mat,m=[],len(sri)//n
final_str=''
for i in range(m):
    l2=sri[:n]
    if i%2:
        l2=l2[::-1]
    final_str+=l2
    mat.append(list(l2))
    sri=sri[n:]
print(mat)
print('Using zip auto transpose:-\n\t',*Sri(*zip(*mat)),sep='')
print(*max(zip(mat)))
print('Numpy transpose:-\n\t',*itertools.chain(*numpy.transpose(mat)),sep='')
print('Numpy ravel:-\n\t',*numpy.array(mat).ravel('F'),sep='')

total,idx,i=len(final_str),0,1
print('Without transpose:-\n\t',final_str[0],end='')
while i<total:
    idx=(idx+n)%total
    i+=1
    print(final_str[idx],end='')
    if i%m==0:idx+=1