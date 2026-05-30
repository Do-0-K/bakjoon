#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
     long long answer = 1;
    int divisor = 1;
    
    for (int i = share + 1; i <= balls; i++) {
        answer *= i;
        answer /= divisor;
        divisor++;
    }
    return answer;
}