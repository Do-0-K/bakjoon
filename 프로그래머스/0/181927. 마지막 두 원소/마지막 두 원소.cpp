#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int a = num_list[num_list.size()-1];
    int b = num_list[num_list.size()-2];
    if(a > b){
       num_list.push_back(a-b);
    }
    else{
        num_list.push_back(a*2);
    }
    answer = num_list;
    return answer;
}