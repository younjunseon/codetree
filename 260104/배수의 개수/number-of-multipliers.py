a = []

for i in range(10):
    a[i] =  input().split("\n")

cnt1 = 0
cnt2 = 0

for i in range(10):
    if(a[i]%3 == 0):
        cnt1+=1
    if(a[i]%5 == 0):
        cnt2+=1

print(cnt1+" "+cnt2)