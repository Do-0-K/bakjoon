def solution(s):
    answer = ''
    index = 0
    for i in s:
        if i == " ":
            index=0
            answer += i
        else:
            if index %2==0:
                answer+= i.upper()
                index+=1
            else:
                answer+=i.lower()
                index+=1
            
    return answer