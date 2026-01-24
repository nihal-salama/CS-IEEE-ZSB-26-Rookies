test_cases = int(input())
for i in range(test_cases):
    length = int(input())
    strings = input().split()
    word1 = strings[0]
    word2 = strings[1]
    word1 = list(word1)
    word2 = list(word2)
    word1.sort()
    word2.sort()
    if word1 == word2:
        print("YES")
    else:
        print("NO")
        
        