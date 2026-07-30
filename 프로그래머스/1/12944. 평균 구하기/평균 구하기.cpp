#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int sum =0;
    for(auto s : arr){
        sum += s;
    }
    answer = (double)sum/arr.size();
    return answer;
}