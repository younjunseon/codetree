b = input()
a = []
a = input().split(" ") 
c = []
j=0

for i in range(int(b)):
    if(int(a[i])%2 == 0 ):
        c.append(a[i])

i = 0
c.reverse()

for i in range(len(c)):
    print(c[i] ,end= " ")
