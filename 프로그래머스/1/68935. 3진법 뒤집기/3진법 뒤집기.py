def solution(n):
    answer = 0
    s = ""
    while n > 0:
        s += str(n%3)
        n//=3
        
    answer = int(s,3)
    return answer