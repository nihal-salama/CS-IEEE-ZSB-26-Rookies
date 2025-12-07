Try = int(input())
for i in range(Try):
    num1, num2, num3 = map(int, input().split())
    if ((num1+num2) == num3) or ((num1+num3) == num2) or ((num3+num2) == num1) :
        print("YES")
    else:
        print("NO")


