Try = int(input())
for i in range(Try):
    a, b, c, d = map(int,input().split())
    if a == b == c == d :
        print('YES')
    else :
        print('NO')