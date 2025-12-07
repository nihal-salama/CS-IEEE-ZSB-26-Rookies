solution = 0
num_of_prblms = int(input())
for problem in range (num_of_prblms) :
    Petya, Vasya, Tonya = map(int, input().split())

    if (Petya + Vasya + Tonya ) >= 2 :
        solution +=1

print(solution)




