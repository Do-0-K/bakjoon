#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    
    unordered_map<int,int> total;
    unordered_map<int,int> left;
    
    for (int i : topping){
        total[i]++;
    }
    
    for (int i : topping){
        left[i]++;
        total[i]--;
        
        if (total[i] == 0){
            total.erase(i);
        }
        
        if (left.size() == total.size()) {
            answer++;
        }
    }
    return answer;
}