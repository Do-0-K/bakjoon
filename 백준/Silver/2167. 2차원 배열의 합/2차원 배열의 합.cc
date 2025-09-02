#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[301][301];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }

    int k;
    cin >> k;

    while (k--) {
        int i, j, x, y;
        cin >> i >> j >> x >> y;

        int sum = 0;
        for (int row = i; row <= x; row++) {
            for (int col = j; col <= y; col++) {
                sum += arr[row][col];
            }
        }
        cout << sum << '\n';
    }

    return 0;
}