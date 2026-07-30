#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;
    int sum=1;
    for(auto &a : box){
        sum *= a/n;
    }
    answer = sum;
    return answer;
}