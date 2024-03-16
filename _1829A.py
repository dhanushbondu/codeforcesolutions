l=['c','o','d','e','f','o','r','c','e','s']
for i in range(int(input())):
    s=input()
    j=0
    count=0
    for i in s:
        if i!=l[j]:
            count+=1
        j+=1
    print(count)

