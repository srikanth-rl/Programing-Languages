from primePy import primes
## import sympy as primes
print(primes.factors(120),primes.check(43))
print('count of primes upto 10k:',len(primes.upto(10000)))
print(primes.between(100,200))
print(primes.upto(100))

from itertools import permutations as perm
lst = perm([1,2,3])
print('\n\nPermutation:-\n',list(map(list,lst)))

from time import time as t
k=int(input('\n\nNo of primes upto ->:\t'))
st=t()
print('imported soln:\n',len(primes.upto(k)),t()-st)

# count=0
# st=t()
# for i in range(2,k):
#     flag=0
#     for j in range(2,i):
#         if i%j==0:
#             flag=1
#             break
#     if flag==0:
#         count+=1
# print('my soln:\n',count,t()-st)

st=t()
ps = [1] * k
ps[0] = ps[1] = 0
for i in range(2, int(k ** 0.5) + 1):
    if ps[i] == 0: 
        continue
    ps[i*i:k:i] = [0]*((k-1-i*i) // i + 1)
# print('Prime Numbers:\n',[x for x in range(len(ps)) if ps[x]!=0])
print('leetcode soln:\n',sum(ps),t()-st)

import numpy as np
import math
st=t()
primes = np.ones(k, dtype=bool)
primes[:2] = primes[4::2] = 0
for i in range(3,math.ceil(math.sqrt(k)),2):
    if primes[i]:
        primes[i*i::i] = 0
# print('Prime Numbers:\n',[x for x in range(len(primes)) if primes[x]])
print('BEST TIME COMPLEXITY:\n',primes.sum(),t()-st)