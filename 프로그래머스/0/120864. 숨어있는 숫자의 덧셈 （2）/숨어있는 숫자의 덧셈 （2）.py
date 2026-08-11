def solution(my_string):
    answer = 0
    num = 0
    for c in my_string:
        if c.isdigit():
            num = num * 10 + int(c)
        else:
            answer += num
            num = 0
    answer += num
    return answer