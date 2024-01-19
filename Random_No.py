import random as r
print('Random Float value 0-1:',r.random())
print('Random integer value within a range:',r.randint(1,100))
print('Random integer value range and a step value:',r.randrange(0,100,2))
print('Random Float value within a range:',r.uniform(50,100))
print('Random 10 integer value in a list within a range:',r.sample(range(1,100),10))
l=[1,2,3,4,5]
print('Random choice in a list:',r.choice(l))
r.shuffle(l)
print('Random shuffling the list:',l)

# RANDOM_NAME
print('\nRandom Names:\n')
import string
alpha = list(string.ascii_lowercase + string.ascii_uppercase)
for i in range(15):
    name=''
    for x in range(10):
        name+=r.choice(alpha)
    print(i+1,'. '+name,sep='')