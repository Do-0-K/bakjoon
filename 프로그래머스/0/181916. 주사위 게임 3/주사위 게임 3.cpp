#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    //중복 상관 X
    vector<int> x = {a,b,c,d};
    unordered_set<int> seen;
    
    vector<int> result;
    
    for (int t : x) {
        if (seen.insert(t).second) {
            result.push_back(t);
        }
    }
    
    //중복 상관 O
    vector<int>v = x;
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    
    if (v.size()==1) return 1111 * v[0];
    else if (v.size()==2){
        if(count(x.begin(),x.end(),v[0]) == 2) return (v[0] + v[1]) * abs(v[0] - v[1]);
        else if (count(x.begin(),x.end(),v[0]) == 3) return (10*v[0]+v[1]) * (10*v[0]+v[1]);
        else {return (10*v[1]+v[0]) * (10*v[1]+v[0]);}
    }
    else if (v.size() == 3){
        for (int i = 0; i < 3; i++) {
            if (count(x.begin(), x.end(), v[i]) == 2) {
                int result = 1;

                for (int j = 0; j < 3; j++) {
                    if (i != j) {
                        result *= v[j];
                    }
                }

                return result;
            }
        }
    }
    else{
        return v[0];
    }
}