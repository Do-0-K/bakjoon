#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int origin = x;
    int su = 0;
    while(x){
        su += x%10;
        x/=10;
    }
    if(origin%su == 0){
        answer = true;
    }
    else{
        answer = false;
    }
    return answer;
}