def solution(cacheSize, cities):
    answer = 0
    stack = []
    for i in cities:
        i = i.lower()
        if i in stack:
            answer += 1
            stack.remove(i)
            stack.insert(0,i)
        else:
            answer += 5
        
            if cacheSize > 0:
                stack.insert(0,i)
                if len(stack) > cacheSize:
                    stack.pop()

    return answer