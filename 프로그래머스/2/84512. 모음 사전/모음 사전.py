def solution(word):
    w = ['A','E','I','O','U']
    answer = 0
    count = 0
    def dfs(current):
        nonlocal answer, count
        if current == word:
            answer = count
            return
        
        if len(current) == 5:
            return
        
        for i in w:
            count += 1
            dfs(current+i)
            
    dfs("")
    
    return answer