Try = int(input())
for i in range(Try):
    rating = int(input())
    if rating >= 1900:
        print("Division 1")
    elif (rating >= 1600) and (rating < 1900):
        print("Division 2")
    elif (rating >= 1400) and (rating < 1600):
        print("Division 3")
    else :
        print("Division 4")
