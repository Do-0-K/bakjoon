def solution(price, money, count):
    total = sum(price * [i for i in range(1, count+1)])
    if money < total:
        return total - money
    else:
        return 0