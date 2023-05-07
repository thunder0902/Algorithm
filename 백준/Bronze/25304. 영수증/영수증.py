a1=int(input())
a2=int(input())
l=[]

for i in range(a2):
    a3=list(map(int,input().split()))
    l.append(a3[0]*a3[1])

if sum(l)==a1:
    print("Yes")
else:
    print("No")

