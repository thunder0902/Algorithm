a=list(map(int,input().split()))

h=a[0]
m=a[1]

0 <= h <= 23
0 <= m <= 59

if m > 44:
    print(h,m-45)
elif m < 45 and h>0:
    print(h-1,m+15)
else:
    print(23,m+15)
