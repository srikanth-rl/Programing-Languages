name1 = input('Enter 1st person Name: ').lower().replace(' ','')
name2 = input('Enter 2nd person Name: ').lower().replace(' ','')
new,count,FLAMES = name1+name2,0,['F','L','A','M','E','S']
for x in set(new):count+=abs(name1.count(x)-name2.count(x))
print('No.of uncommon letters:',count)
# from math import log
# print(FLAMES[2**int(log(6,count))])
while len(FLAMES)>1:
    FLAMES=FLAMES[1::count]
print('Using log n:',FLAMES[0])
def flames(name1, name2):
    name1 = name1.lower().replace(" ", "")
    name2 = name2.lower().replace(" ", "")
    letters = {}
    for letter in name1 + name2:
        if letter in letters:
            letters[letter] += 1
        else:
            letters[letter] = 1
    common_letters = 0
    for letter in "flames":
        if letter in letters:
            common_letters += letters[letter]
            del letters[letter]
    remaining_letters = len(name1) + len(name2) - 2*common_letters
    relationships = ["Friends", "Lovers", "Affectionate", "Marriage", "Enemies", "Siblings"]
    while len(relationships) > 1:
        index = (remaining_letters % len(relationships)) - 1
        if index < 0:
            index = len(relationships) - 1
        relationships = relationships[index+1:] + relationships[:index]
    return relationships[0]
print(flames(name1, name2))