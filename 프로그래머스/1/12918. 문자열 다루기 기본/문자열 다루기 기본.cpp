#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length() != 4 && s.length() != 6){
        return false;
    }
    for(char d : s){
        if(!isdigit(d)){
            return false;
        }
    }
    return answer;
}