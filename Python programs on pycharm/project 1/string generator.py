import random
import string

def alphanumeric_string(l):
    str=''
    characters=string.ascii_uppercase + 2 * string.ascii_lowercase + string.digits + string.ascii_letters
    str+= ''.join(random.choice(string.ascii_uppercase) for x in range(1))
    str+= ''.join(random.choice(characters) for x in range(l-4))
    str+= ''.join(random.choice(string.digits) for x in range(1))
    str+= ''.join(random.choice(string.ascii_lowercase) for x in range(2))
    return(str)

print( 'Alphanumeric string:',alphanumeric_string(6))
print('Rest 50 strings:')
ctr=0
for i in range(50):
    s=''
    s=alphanumeric_string(6)
    print(s)
    l=len(s)
    if (s[l-1] and s[l-2]).isdigit():
        ctr+=1

print("No of times string ending with two digits = ",ctr)