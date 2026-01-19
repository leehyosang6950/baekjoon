n=int(input())
for i in range(0,n):
    a,b=map(int,input().split())
    k=1
    for i in range(0,b):
        k=k*a
        x=k%10
    print(x)