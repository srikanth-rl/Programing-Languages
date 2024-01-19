# a=9
# b=90
# print('\n',a+b)
# print(input() + input())
# print(max(input(),input()))

def gcd(a, b):
    return b if a == 0 else gcd(b % a, a)


a = int(input('Enter a number of finding GCD: '))
b = int(input('Enter another number to find GCD: '))
print('GCD:', gcd(a, b))


def lcm(a, b):
    return a*b//(gcd(a, b))


print('LCM:', lcm(a, b))
