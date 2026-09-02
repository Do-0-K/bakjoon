from itertools import combinations

def is_prime(n):
    if n < 2:
        return False

    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def solution(nums):
    answer = -1
    cn = 0
    s = [sum(i) for i in combinations(nums,3)]
    
    for j in s:
        if is_prime(j):
            cn += 1
    
    answer = cn
    
    return answer