letters = 'qwertyuiopasdfghjklzxcvbnm'
word_len = int(input())
word = input().lower()
if word_len < len(letters):
    print("NO")
else:
    for i in letters:
        if i not in word:
            check = 0
            break
        else:
            check = 1
    if check == 0 :
        print('NO')
    else :
        print('YES')

