test_cases = int(input())
for i in range(test_cases):
    length = int(input())
    integers = input()
    integers = list(integers.split())
    for i in range(length):
        temp = integers.copy()
        value = temp.pop(i)
        for j in range(length -1):
            if value not in temp:
                print(integers.index(value) + 1)
                break
