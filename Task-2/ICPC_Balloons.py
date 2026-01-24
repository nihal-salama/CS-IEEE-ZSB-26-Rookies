num_of_cases = int(input())
for i in range(num_of_cases):
    num_of_problems = int(input())
    ballons = num_of_problems
    problems = input().upper()
    problems = set(problems)
    ballons += len(problems)
    print(ballons)

    
    
