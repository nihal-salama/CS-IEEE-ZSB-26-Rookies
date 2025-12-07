Try = int(input())
 
for i in range(Try):
    word = 'codeforces'
    char = input().lower()
    if char in word:
        print("YES")
    else:
        print("NO")