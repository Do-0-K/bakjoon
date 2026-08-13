def solution(n):
    answer = [[0] * n for _ in range(n)]
    
    i_direct = [0, 1, 0, -1]
    j_direct = [1, 0, -1, 0]
    
    
    i_value, j_value = 0,0
    direct = 0
    
    for i  in range(1, n*n+1):
        answer[i_value][j_value] = i
        
        next_i = i_value + i_direct[direct]
        next_j = j_value + j_direct[direct]
        
        if ( next_i < 0 or next_i >= n or next_j < 0 or next_j >= n or answer[next_i][next_j] != 0):
            direct = (direct+1) % 4
            next_i = i_value + i_direct[direct]
            next_j = j_value + j_direct[direct]
        
        i_value = next_i
        j_value = next_j
    
    return answer