#include <string>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int solution(string dirs) {
    map<char, int> move = {
        {'U', 1},
        {'L', 0},
        {'D', 3},
        {'R', 2}
    };

    int move_x[] = {-1, 0, 1, 0};
    int move_y[] = {0, 1, 0, -1};

    int s_x = 0;
    int s_y = 0;

    set<pair<pair<int, int>, pair<int, int>>> x;

    for (char c : dirs) {
        int t = move[c];

        int nx = s_x + move_x[t];
        int ny = s_y + move_y[t];

        if (!(nx >= -5 && nx <= 5 && ny >= -5 && ny <= 5)) {
            continue;
        }

        pair<int, int> start = {s_x, s_y};
        pair<int, int> next = {nx, ny};

        if (start > next) {
            swap(start, next);
        }

        x.insert({start, next});

        s_x = nx;
        s_y = ny;
    }

    return x.size();
}