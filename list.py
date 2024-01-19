l=[8,'9',4.5,'hai']#str of list...
while True:
    value=input('Enter the inputs in next next Lines:\n')
    if value: 
        l.append(value)
    else:
        break
print(type(l),*l,sep="\n")
b=l.copy()
l.clear()

print(b)
l=[2,3,4,-2,34,3,3,1]
print("Index of 1 :",l.index(1),"\nCount of 3 :",l.count(3),"\nMax :",max(l),"\nMin :",min(l),"\nSize :",len(l),sep=" ")
print(list(map(str,
    input('Enter the inputs in next next by space:\n').split()))[::-1])
print(list(range(1,11)))

for num in range(0,11, 2):#increamented by 2
    print(num,end=' ')