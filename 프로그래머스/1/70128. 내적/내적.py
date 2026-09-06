def solution(a, b):
    answer = 1234567890
    n = len(a)
    sume = sum([a[i] * b[i] for i in range(n)])
    answer = sume
    return answer