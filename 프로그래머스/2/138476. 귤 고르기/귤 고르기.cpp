#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> count;
    for (int value : tangerine) {
        count[value]++;
    }
    
    vector<int> counts;
    
    for (auto& [value, cnt] : count) {
        counts.push_back(cnt);
    }
    
    sort(counts.rbegin(), counts.rend());
    
    for (int c : counts) {
        k -= c;
        answer++;
        
        if (k <= 0) {
            break;
        }
    }
    return answer;
}