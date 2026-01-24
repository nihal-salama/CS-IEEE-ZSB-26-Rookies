word = input()
if len(word) == 1 or word[1:].isupper():
    word = word.swapcase()
print(word)
