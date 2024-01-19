Qn='''
    Rohit is a cricket player. He wants to give some balls to the children in his apartment.
    All the children are sitting in a line and each of them has a rating score according to his or her performance in cricket.
    Rohit wants to give at least 1 ball to each child.

    If two children sit next to each other,then the one with the higher rating must get more balls.
    Nearby children should not get the same number of balls.
    Rohit wants to minimize the total number of balls he must buy.
    Write a program to find the minimum number of balls that Rohit should buy.'''

n,l = int(input()),list(map(int,input().split()))
left,right,Candy  = [1]*n,[1]*n,0
for i in range(1,n):
    if l[i]>l[i-1]:
        left[i]=left[i-1]+1
for i in range(n-1,0,-1):
    if l[i-1]>l[i]:
        right[i-1]=right[i]+1
for i in range(n):Candy+=max(left[i],right[i])
print('No of Candies needed: '+str(Candy),left,right,sep='\n')