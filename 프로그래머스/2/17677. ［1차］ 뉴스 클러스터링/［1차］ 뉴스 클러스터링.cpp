#include <string>
#include <vector>
#include <cctype>
using namespace std;

int solution(string str1, string str2) {
    vector<string> arr1;
    vector<string> arr2;

    for (int i = 0; i < (int)str1.length() - 1; i++) {
        string s = str1.substr(i, 2);

        for (char &c : s) {
            c = tolower(c);
        }

        if (isalpha(s[0]) && isalpha(s[1])) {
            arr1.push_back(s);
        }
    }

    for (int i = 0; i < (int)str2.length() - 1; i++) {
        string s = str2.substr(i, 2);

        for (char &c : s) {
            c = tolower(c);
        }

        if (isalpha(s[0]) && isalpha(s[1])) {
            arr2.push_back(s);
        }
    }

    int cnt = 0;
    int le1 = arr1.size();
    int le2 = arr2.size();

    for (int i = 0; i < (int)arr1.size(); i++) {
        for (int j = 0; j < (int)arr2.size(); j++) {
            if (arr1[i] == arr2[j]) {
                cnt++;
                arr2.erase(arr2.begin() + j);
                break;
            }
        }
    }

    int total = le1 + le2 - cnt;

    if (total == 0) {
        return 65536;
    } else {
        return 65536 * cnt / total;
    }
}
