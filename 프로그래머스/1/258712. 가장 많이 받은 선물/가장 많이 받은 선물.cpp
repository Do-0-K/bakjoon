#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    map <string,int> m;
    map<string,int>send;
    map<string,int>receive;
    
    for(int i=0;i<gifts.size();++i){
        int pos = gifts[i].find(" ");
        string sender = gifts[i].substr(0,pos);
        string receiver = gifts[i].substr(pos+1);
        
        send[sender]++;
        receive[receiver]++;
        
        if (m.find(gifts[i]) == m.end()) {
            m.insert({gifts[i], 1});
        }
        else {
            m[gifts[i]]++;
        }
    }
    map<string,int>month;
    for(int i=0; i<friends.size(); i++) {
        for(int j=i+1; j<friends.size(); j++) { 
            string ij = friends[i] + " " + friends[j];
            string ji = friends[j] + " " + friends[i];
            
            if (m[ij]==m[ji]) {
                
                int iGiftScore = send[friends[i]] - receive[friends[i]];
                int jGiftScore = send[friends[j]] - receive[friends[j]];
                
                if (iGiftScore > jGiftScore) {
                    month[friends[i]]++;
                    answer = max(answer, month[friends[i]]);
                } else if (iGiftScore < jGiftScore) {
                    month[friends[j]]++;
                    answer = max(answer, month[friends[j]]);
                }
                
            } else {
                if (m[ij]<m[ji]) {
                    month[friends[j]]++;
                    answer = max(answer, month[friends[j]]);
                } else {
                    month[friends[i]]++;
                    answer = max(answer, month[friends[i]]);
                }
                    
            }
            
            
        }
    }
    return answer;
}