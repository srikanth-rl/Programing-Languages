# in this question we r taken only the kth position from people,
# now from that taken we continue upto last person remains in clockwise...
from math import log
people, pos = int(input('Enter no of people: ')), int(
    input('Enter pos to remove: '))
l = [*range(1, 1 + people)]

# in O(1)
print('Using O(1) Getting every kth people only :', pos ** int(log(people, pos)))
while len(l) > 1:
    l = l[(pos - 1) % len(l)::pos]
print("Using n(logn) last kth person but not right at all time :", l)

# ----------------
# in this question we r removing only the kth position from people,
# now from that removes every kth pos, we continue upto last person remains in clockwise...
print()
res = 0
for i in range(2, people + 1):
    res = (res + pos) % i
print('Removing every kth people and last one is : ', res + 1)
