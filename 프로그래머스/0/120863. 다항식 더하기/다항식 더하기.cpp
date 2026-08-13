#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    stringstream ss(polynomial);
    string temp = "";
    int num=0;
    int x=0;
    while(ss >> temp){
        if (temp == "+") continue;
        if(temp.back() == 'x'){
            if(temp == "x"){
                x += 1;
            }
            else{
                x += stoi(temp.substr(0, temp.size() - 1));
            }
        }
        else {
            num += stoi(temp);
        }
    }
    
    string answer = "";
    if (x > 0){
        if(x == 1){
            answer += "x";
        }
        else{
            answer += to_string(x) + "x";
        }
    }
    
    if (num > 0){
        if (!answer.empty()){
            answer += " + ";
        }
        answer += to_string(num);
    }
    
    return answer;
}