#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> sorted = emergency;
    sort(sorted.begin(),sorted.end(),greater<>());
    
     for (int i = 0; i < emergency.size(); i++) {
        for (int j = 0; j < sorted.size(); j++) {
            if (emergency[i] == sorted[j]) {
                answer.push_back(j + 1);
                break;
            }
        }
    }
    return answer;
}