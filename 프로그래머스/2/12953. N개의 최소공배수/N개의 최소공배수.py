def solution(arr):
    answer = arr[0]

    for n in arr[1:]:
        a, b = answer, n

        while b:
            a, b = b, a % b

        answer = answer * n // a
    return answer