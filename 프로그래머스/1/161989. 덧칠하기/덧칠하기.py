def solution(n, m, section):
    colored = [True] * n
    cnt = 0
    for i in range(len(section)):
        colored[section[i]-1] = False
    
    while not all(colored):
        for i in range(len(colored)):
            if not colored[i]:
                cnt += 1
                if i+m > len(colored):
                    for j in range(i,len(colored)):
                        colored[j] = True
                else:
                    for j in range(i,i+m):
                        colored[j] = True
    
    return cnt