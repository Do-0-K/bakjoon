#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    for(int i=0;i<s.size();++i){
        if(s.size()%2==0){
            if(i == (s.size()/2-1) || i == s.size()/2){
                answer += s[i];
            }
        }
        else{
            if(i == (s.size()/2)){
                answer += s[i];
            }
        }
    }
    return answer;
}