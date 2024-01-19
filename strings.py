print("hai-22-05-2003".partition('-'))
s='  Hai Srikanth!How are You?   '
print(s.strip()+'\nIn reverse : '+s.strip()[::-1],
"\nPrint start from 4th index to ends before 8th index :"
,s.strip()[4:8],end="\nEg.\n")
print(s.strip()[-3:-1])
print("Print start from 4th index :",s.strip()[4:])
print("Print ends before 5th index :",s.strip()[:5],end="\nEg.\n")
print(s.strip()[:-2])
print("Length :",len(s),end=" ")
print(len(s.strip()),end=" ")#remove the white space
print(len(s.lstrip()),end=" ")#remove the LEFT white space
print(len(s.rstrip()),end=" ")#remove the RIGHT white space
# string....
str=input("\nEnter a string : ")
print( str.lower(),str.upper(),str.capitalize(),str.title(),
str.endswith('th'),str.count('s'),"Find 'i' after the index 1 :",
str.find('i',1),
"Replacing 'h' by 'j' :",str.replace('h','j'),"sri213".isalnum(),sep="\n" )