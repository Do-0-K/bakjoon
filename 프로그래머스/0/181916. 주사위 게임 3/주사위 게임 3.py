def solution(a, b, c, d):
    answer = 0
    vv = [a, b, c, d]
    num = list(set(vv))
    
    if len(num) == 1:
        return num[0] * 1111
    elif len(num) == 2:
        x, y = num
        if vv.count(x) == 2:
            return (x+y) * abs(x-y)
        elif vv.count(x) == 3:
            return (10*x + y) * (10*x + y)
        else:
            return (10*y + x) * (10*y + x)
            
    elif len(num) == 3:
        remain = [x for x in vv if vv.count(x)==1]
        return remain[0] * remain[1]
    else:
        return min(num)