#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_set<int> s;
    for(auto p : nums){
        s.insert(p);
    }
    if(nums.size()/2 < s.size()){
        answer = nums.size()/2;
    }
    else{answer = s.size();}
    return answer;
}