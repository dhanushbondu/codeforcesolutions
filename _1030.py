n=int(input())
l=list(map(int,input().split()))
count=0
for i in l:
    if i==1:
        count+=1
if count>0:
    print('HARD')
else:
    print('EASY')