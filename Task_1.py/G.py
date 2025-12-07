shovel_price, coin_value = map(int,input().split())
temp = shovel_price
coins = shovel_price % 10
count = 0
if coins == coin_value or coins == 0 :
    count +=1
else :
    count = 1
    while coins != coin_value and coins != 0:
        count += 1
        shovel_price += temp
        coins = shovel_price % 10 

print(count)

