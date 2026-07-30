#include <string>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

set<int> numberSet;

bool isPrime(int n){
    if(n==0 || n==1){
        return false;
    }
    int lim = sqrt(n);
    for(int i=2;i<=lim;++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void recursive(string com, string other)
{
    if(com != "")
        numberSet.insert(stoi(com));
    
    for(int i=0;i<other.size();++i){
        recursive(com + other[i],other.substr(0,i) + other.substr(i+1));
    }
}

int solution(string numbers) {
    recursive("",numbers);
    int answer = 0;
    
    for(auto nu : numberSet){
        if(isPrime(nu))
            answer++;
    }
    return answer;
}