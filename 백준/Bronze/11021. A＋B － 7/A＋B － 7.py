a=int(input())

for i in range(a):
    b=list(map(int,input().split()))
    print(f"Case #{i+1}: {b[0]+b[1]}")