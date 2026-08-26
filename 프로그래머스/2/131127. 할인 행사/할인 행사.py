def solution(want, number, discount):
    answer = 0
    d = {i:j for i,j in zip (want,number)}
    cnt = 0
    for i in range(0,len(discount)-9):
        c = {}
        for j in range(i, i+10):
            if discount[j] in c:
                c[discount[j]] += 1
            else:
                c[discount[j]] = 1
        
        if c == d and len(c) != 0:
            cnt+=1
    
    if cnt == 0 :
        return 0
    else:
        return cnt