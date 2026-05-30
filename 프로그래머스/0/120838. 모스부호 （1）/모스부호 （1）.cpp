#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";
    vector<string> morse = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
        "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    istringstream is(letter);
    string m_code;
    
    while(is >> m_code){
        for(int i=0;i<morse.size();++i){
            if(m_code == morse[i]){
                answer += (char)('a'+i);
                break;
            }
        }
    }
    return answer;
}