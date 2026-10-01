def solution(bandage, health, attacks):
    heal = health
    conti_heal = 0
    atk_ind = 0
    storage = attacks[0][0]
    
    total = attacks[-1][0]

    for i in range(1,total+1):
        if i == storage:
            heal -= attacks[atk_ind][1]
            conti_heal = 0
            atk_ind += 1
            
            if heal <= 0:
                return -1
            
            if atk_ind < len(attacks):
                storage = attacks[atk_ind][0]
        else:
            heal += bandage[1]
            conti_heal += 1
            
            if conti_heal == bandage[0]:
                heal += bandage[2]
                conti_heal = 0
            
            if heal >= health:
                heal = health
    
    return heal