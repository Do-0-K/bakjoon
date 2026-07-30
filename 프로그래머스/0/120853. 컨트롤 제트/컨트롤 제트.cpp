#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    string temp;
    int last_num=0;
    while (ss >> temp){
        if (temp == "Z"){
            answer -= last_num;
        }
        else{
            last_num = stoi(temp);
            answer += last_num;
        }
    }
    return answer;
}