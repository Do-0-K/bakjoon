import math
def solution(n):
    a = math.isqrt(n)
    if math.pow(a,2) == n:
        return math.pow(a+1,2)
    else:
        return -1