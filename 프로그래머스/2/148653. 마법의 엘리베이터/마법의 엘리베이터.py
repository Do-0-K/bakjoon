def solution(storey):
    answer = 0
    while storey:
        n = storey % 10
        storey //= 10

        if n > 5:
            answer += 10 - n
            storey += 1
        elif n < 5:
            answer += n
        else:
            if storey % 10 >= 5:
                answer += 5
                storey += 1
            else:
                answer += 5
    
    return answer