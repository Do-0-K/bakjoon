#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    //종류 별로 구분
    unordered_map<string,int> map;
    for(vector<string> ss : clothes){
        map[ss[1]]++;
    }
    //입지 않는 경우 고려해서 조합만들기
    for(auto i=map.begin();i != map.end();++i){
        answer *= i->second + 1 ; //종류 개수 + 입지 않는 경우
    }
    //아무것도 입지 않는 경우 제외
    return answer-1;
}