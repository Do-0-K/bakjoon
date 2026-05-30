#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string s_age = to_string(age);
    for(char c: s_age){
        answer += c+49;
    }
    return answer;
}