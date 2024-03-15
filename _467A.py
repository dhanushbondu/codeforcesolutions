count=0
for _ in range(int(input())):
    p,q=map(int,input().split())
    space=q-p
    if space>=2:
        count+=1
print(count)
