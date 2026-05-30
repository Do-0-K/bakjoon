#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    if(n<=slice)return 1;
    else if(n%slice ==0){return (n/slice);}
    else return (n/slice)+1;
    return answer;
}