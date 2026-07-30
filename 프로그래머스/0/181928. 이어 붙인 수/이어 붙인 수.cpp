#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string he = "", se = "";
    for(auto s : num_list){
        if(s%2==0){
            se += to_string(s);
        }
        else{
            he += to_string(s);
        }
    }
    answer = stoi(se) + stoi(he);
    return answer;
}