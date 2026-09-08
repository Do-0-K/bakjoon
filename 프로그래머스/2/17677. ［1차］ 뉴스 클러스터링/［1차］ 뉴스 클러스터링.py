def solution(str1, str2):
    arr1 = []
    for i in range(len(str1)-1):
        s = str1[i:i+2].lower()
        if s.isalpha():
            arr1.append(s)
    
    arr2 = []
    for i in range(len(str2)-1):
        s = str2[i:i+2].lower()
        if s.isalpha():
            arr2.append(s)
    
    cnt = 0
    le1 = len(arr1)
    le2 = len(arr2)
    for i in arr1:
        if i in arr2:
            cnt+=1
            arr2.remove(i)
    
    total = le1 + le2 - cnt
    
    if total == 0:
        return 65536
    else:
        return (int)(65536 * (cnt/total))