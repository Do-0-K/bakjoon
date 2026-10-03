def solution(n):
    a, b = 1, 2

    if n == 1:
        return 1
    elif n == 2:
        return 2
    else:
        for _ in range(3, n + 1):
            a, b = b, (a + b) % 1000000007
    
    return b