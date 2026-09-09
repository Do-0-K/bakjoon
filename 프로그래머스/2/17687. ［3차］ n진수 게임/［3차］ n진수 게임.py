def solution(n, t, m, p):
    answer = ''
    numbers = ""
    num = 0
    digits = "0123456789ABCDEF"

    while len(numbers) < t * m:
        if num == 0: # 0 일때
            numbers += "0"
        else:
            temp = ""
            x = num

            while x > 0:
                temp = digits[x % n] + temp
                x //= n

            numbers += temp

        num += 1

    for i in range(p - 1, t * m, m): # t * m 까지인데 m 간격으로
        answer += numbers[i]

        if len(answer) == t:
            break
    return answer