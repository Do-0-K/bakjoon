#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1;i<101;++i){
        answer++;
        if((i*6)%n==0)return answer;
    }
    return answer;
}