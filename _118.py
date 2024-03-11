s=input()
v=['a','A','e','E','i','I','o','O','u','U','y','Y']
c=''
for i in range(0,len(s)):
    if s[i] not in v:
        c=c+'.'
        c=c+s[i].lower()
    else:
        c+=''
print(c)
