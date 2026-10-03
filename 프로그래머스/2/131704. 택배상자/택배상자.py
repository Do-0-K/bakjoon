def solution(order):
    answer = 0
    stack = []
    current = 1
    for i in order:
        while current <= i:
            if current == i:
                answer += 1
                current += 1
                break
                
            stack.append(current)
            current += 1
    
        if current - 1 == i:
            continue

        if stack and stack[-1] == i:
            stack.pop()
            answer += 1
        else:
            break
    
    return answer