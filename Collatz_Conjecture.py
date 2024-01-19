l=[]
def hailstone_numbers(num):
    l.append(num)
    return len(l) if num==1 else hailstone_numbers(num//2) if num%2==0 else hailstone_numbers((num*3)+1)
print(hailstone_numbers(2**68),l)