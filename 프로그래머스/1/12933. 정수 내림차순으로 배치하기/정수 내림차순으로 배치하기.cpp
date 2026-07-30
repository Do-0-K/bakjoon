#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int>s;
    while(n){
        s.push_back(n % 10);
        n /= 10;
    }
    sort(s.begin(),s.end(),greater<int>());
    for(int i=0;i<s.size();++i){
        answer *= 10;
        answer += s[i];
    }
    return answer;
}