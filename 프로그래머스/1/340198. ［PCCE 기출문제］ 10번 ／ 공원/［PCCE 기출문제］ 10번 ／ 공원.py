def solution(mats, park):
    answer = 0
    n = len(park)
    m = len(park[0])
    
    mats.sort(reverse=True)
    
    for a in mats:     
        for i in range(n-a+1):
            for j in range(m-a+1):
                can = True
                for k in range(i, i+a):
                    for q in range(j,j+a):
                        if park[k][q] != '-1':
                            can = False
                            break
                    if not can:
                        break
                if can:
                    return a
                
    return -1