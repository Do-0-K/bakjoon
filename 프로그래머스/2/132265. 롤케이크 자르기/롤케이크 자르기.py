from collections import Counter
def solution(topping):
    answer = 0
    total = Counter(topping)
    left = set()
    
    for i in topping:
        left.add(i)
        
        total[i] -= 1
        
        if total[i] == 0:
            del total[i]
        
        if len(left) == len(total):
            answer += 1

    return answer