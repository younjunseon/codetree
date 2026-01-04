str1 = "apple"
str2 = "banana"
str3 = "grape"
str4 = "blueberry"
str5 = "orange"

A = [char for char in str1]
B = [char for char in str2]
C = [char for char in str3]
D = [char for char in str4]
E = [char for char in str5]

s = input()
cnt = 0

for i in range(2):
    if(str(A[i+2])==str(s)):
        print(str1)
        cnt += 1
        break
        

for i in range(2):
    if(str(B[i+2])==str(s)):
        print(str2)
        cnt += 1
        break

for i in range(2):
    if(str(C[i+2])==str(s)):
        print(str3)
        cnt += 1
        break

for i in range(2):
    if(str(D[i+2])==str(s)):
        print(str4)
        cnt += 1
        break

for i in range(2):
    if(str(E[i+2])==str(s)):
        print(str5)
        cnt += 1
        break

print(cnt)