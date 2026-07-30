def to_days(date):
    year=int(date[:4])
    month=int(date[5:7])
    day=int(date[8:])
    return year*12*28+month*28+day
def solution(today, terms, privacies):
    Today=to_days(today)
    D={}
    for s in terms:
        key=s[0]
        value=int(s[2:])
        D[key]=value
    answer = []
    for i,privacy in enumerate(privacies):
        if Today>=to_days(privacy[:10])+D[privacy[-1]]*28:
            answer.append(i+1)

    return answer