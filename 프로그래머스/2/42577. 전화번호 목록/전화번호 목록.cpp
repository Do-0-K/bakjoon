#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    unordered_map<string,int> s;
    for(int i=0;i<phone_book.size();++i){
        s[phone_book[i]]=1;
    }
    
    for(int i=0;i<phone_book.size();++i){
        for(int j=0;j<phone_book[i].size();++j){
            string num = phone_book[i].substr(0,j);
            if(s[num])
                return false;
        }
    }
    return true;
}