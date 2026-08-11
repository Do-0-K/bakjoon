def solution(dots):
    answer = 0
    x = []
    y = []
    for dot in dots:
        x.append(dot[0])
        y.append(dot[1])
    
    width = max(x) - min(x)
    height = max(y) - min(y)
    answer = width * height
    return answer