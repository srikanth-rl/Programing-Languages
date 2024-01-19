from collections import Counter as c
answer = c(input())
print('Printing Dict without duplicates in given order :',answer)
print('Printing Dict using tuples :',*answer.items())
print('Printing Dict Sorted by only Keys :',sorted(answer.items()))
print('Printing Dict Sorted by only Values :',sorted(answer.items(),key=lambda x:x[1]))
key_value=sorted(answer.items(),key=lambda x:(x[1],x[0]))
print('Printing Dict by both Values and Keys :',key_value)