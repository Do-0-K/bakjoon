#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string mul = to_string(a) + to_string(b);
    int x = 0, y = 0;
    x = stoi(mul);
    y = 2*a*b;
    if(y > x){
        answer = y;
    }
    else{
        answer = x;
    }
    return answer;
}