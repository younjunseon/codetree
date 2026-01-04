a = []

for i in range(10):
    a.append(input())

cnt1 = 0
cnt2 = 0

for i in range(10):
    if(int(a[i])%3 == 0):
        cnt1+=1
    if(int(a[i])%5 == 0):
        cnt2+=1

print(str(cnt1)+" "+str(cnt2))