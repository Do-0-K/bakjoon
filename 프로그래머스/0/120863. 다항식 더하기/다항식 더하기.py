def solution(polynomial):
    answer = ''
    temp = polynomial.split(" ")
    x_value = 0
    num = 0
    for i in temp:
        if i[0] == '+': continue
        if i[-1] == 'x':
            if i[0] == 'x':
                x_value += 1
            else :
                xx = i[:-1]
                x_value += int(xx)
        else :
            num += int(i)
    
    if x_value > 0:
        if x_value == 1:
            answer += 'x'
        else:
            answer += str(x_value) + 'x'
    
    if num > 0:
        if len(answer) != 0:
            answer += ' + '
        answer += str(num)
    return answer