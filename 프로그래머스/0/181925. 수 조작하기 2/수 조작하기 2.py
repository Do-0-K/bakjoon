def solution(numLog):
    answer = ''
    num = numLog[0]
    past = numLog[0]
    for i in range(1,len(numLog)):
        num = numLog[i]
        x = num - past
        if x == 1:
            answer += 'w'
        elif x == -1:
            answer += 's'
        elif x == 10:
            answer += 'd'
        elif x == -10:
            answer += 'a'
        past = num
    return answer