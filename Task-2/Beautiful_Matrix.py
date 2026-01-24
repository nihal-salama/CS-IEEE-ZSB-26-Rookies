for i in range(5):
    num = input().split()
    for j in range(5): 
        if num[j] == '1':
            current_row = i
            current_column = j
moves = abs(2-current_row) + abs(2-current_column)
print(moves)
           
           