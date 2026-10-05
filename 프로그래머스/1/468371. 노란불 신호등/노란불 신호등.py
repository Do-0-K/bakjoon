from math import lcm
def solution(signals):
    answer = 0
    
    per = 1
    for g, y, r in signals:
        per = lcm(per, g+y+r)
        
    for t in range(1, per + 1):
        for g, y, r in signals:
            pos = (t - 1) % (g + y + r)

            if not (g <= pos < g + y):
                break
        else:
            return t

    return -1