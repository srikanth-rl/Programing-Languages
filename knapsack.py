n,w,profit,weight=4,12,[1,2,3,4],[10,11,12,1]
l,k1,d=[],0,{}
for i,val in (enumerate(weight)):
    if val<=w:
        d[profit[i]]=val
new=dict(sorted(d.items(),key=lambda x:(x[1],x[0])))
j=0
l=list(new.values())
keys=list(new.keys())
max=0
# Not solved........
for i in range(len(l)):
    k=i
    key=keys[l.index(l[j])]
    if k<=w and key>max:
        max=key            

    for j in range(i+1,len(l)):
        k+=j
        key=keys[l.index(l[j])]
        if k<=w and key>max:
            max=key
            print(k,max)  
print(max)