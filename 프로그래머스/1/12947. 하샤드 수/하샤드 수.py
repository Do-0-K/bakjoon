def solution(x):
    answer = True
    origin = x
    num = 0
    
    while x > 0:
        num += (int)(x%10)
        x //=10
    
    if origin%num == 0:
        return True
    else:
        return False
    return answer