#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    string prev = words[0];
    unordered_set<string> used;

    used.insert(prev);

    for (int i = 1; i < words.size(); i++) {
        string current = words[i];

        if (prev.back() != current.front() || used.count(current)) {
            return {(i % n) + 1, (i / n) + 1};
        }

        used.insert(current);
        prev = current;
    }

    return {0, 0};
}