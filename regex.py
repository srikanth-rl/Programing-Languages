import re
'''
.       - Any Character Except New Line
\       - Used to drop the special meaning of character
\d      - Digit (0-9)
\D      - Not a Digit (0-9)
\w      - Word Character (a-z, A-Z, 0-9, _)
\W      - Not a Word Character
\s      - Whitespace (space, tab, newline)
\S      - Not Whitespace (space, tab, newline)
\b      - Word Boundary
\B      - Not a Word Boundary

^       - Beginning of a String
$       - End of a String
[]      - Matches Characters in brackets
[^ ]    - Matches Characters NOT in brackets
|       - Either Or
( )     - Group

Quantifiers:
*       - 0 or More
+       - 1 or More
?       - 0 or One
{3}     - Exact Number
{3,4}   - Range of Numbers (Minimum, Maximum)

#### Sample Regexs ####

[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+'''
import re
string = "The Date is January 27 June 6 and my birthday august 7"
string9 = "csse"
# y = re.search("^c+.{2}s+[e$]", string)
# y = re.search("^cs+.+e+$", string9)

# y = re.search("([A-Za-z]+) (\d+)", string)
# print(y.group(2))

y = re.compile("([A-Za-z]+) (\d)")


for match in y.finditer(string):
    print(match.group(1),"-",match.group(2))
    
# string3 = "ccsssee"
# x = re.search("^c+s+e+$", string)

# txt = "llo planet"

# Search for a sequence that starts with "he", followed excactly 2 (any) characters, and an "o":

# y = re.search("^l{2}o", txt)
# y = re.search("^c{2}s{2}e", string3)#must include e// the followup

# string2 = "21CSr51"
# y = re.search("^[0-9]{2}[a-z]{3}|[A-Z]{3}[0-9]{2}$", string2)
# y = re.search("^[0-9]{2}[a-zA-z]{3}[0-9]{2}$", string2)
# y = re.search("^[0-9]{2}c?[0-9]{2}$", string2)# zero or one occurence of c

# string5 = "heeeello"

# y = re.search("h+e.+o", string5)

# string4 = "mom"

# y = re.search("[^A-Za-z0-9]", string4)  # searching for special chars only


# sentence = "hi hhi this is hi from is hi"

# for word in sentence:
#     if word == 'hi':
#         print(word)

# if y:
#     print("True")
# else:
#     print("False")