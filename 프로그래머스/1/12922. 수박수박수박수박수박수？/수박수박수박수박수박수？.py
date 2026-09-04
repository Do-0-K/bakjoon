def solution(n):
    answer = ''
    for i in range(n):
        if i%2 == 0 :
            answer += '수'
        else:
            answer += '박'
    return answer

# 이런 방법이 있긴한데 string으로 해야 되는 문제긴 하다
#def solution(n):
#   return ['수' if i%2==0 else '박' for i in range(n)]