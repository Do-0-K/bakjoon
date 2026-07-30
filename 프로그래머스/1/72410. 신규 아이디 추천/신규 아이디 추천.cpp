#include <string>
#include <vector>
#include <regex>

using namespace std;

string solution(string new_id) {
    string answer = "";
    // 1. 소문자 치환
    for(char& d : new_id){
        d = tolower(d);
    }
    // 2. !,@,#,* 문자 제거
    answer = regex_replace(new_id, regex("[^a-z0-9-_.]"), "");
    // 3. . 2개 이상은 1개로
    answer = regex_replace(answer,regex("\\.+"),".");
    // 4. .이 처음이나 끝에 위치한다면 제거
    answer = regex_replace(answer,regex("^[.]|[.]$"),"");
    // 5. 빈 문자열이라면 'a' 대입
    if(answer.empty()){
        answer = 'a';
    }
    // 6. 16자 이상이면 15개로 제한 후 마침표가 끝에 위치하면 제거
    if(answer.size() > 15){
        answer = answer.substr(0,15);
        answer = regex_replace(answer,regex("[.]$"),"");
    }
    // 7. 길이가 2자 이하라면, 마지막 문자를 길이가 3이 될 때까지 붙인다.
    while(answer.size() < 3)
    {
        answer += answer.back();
    }
    return answer;
}