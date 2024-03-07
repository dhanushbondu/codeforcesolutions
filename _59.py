string=input()
upper=0
lower=0
for i in string:
    if i.isupper():
        upper+=1
    else:
        lower+=1
if lower>=upper:
    print(string.lower())
else:
    print(string.upper())