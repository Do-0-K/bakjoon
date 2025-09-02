#include "iostream"
using namespace std;

int main() {
    int n;
    cin >> n;
    int t = n - 1;
    for (int i = 1; i <= 2 * n - 1; i++) {
        if (i <= n) {
            for (int j = 0; j < i; j++) {
                cout << "*";
            }
            for (int k = 0; k < 2 * (n - i); k++) {
                cout << " ";
            }
            for (int j = 0; j < i; j++) {
                cout << "*";
            }
        }
        else {
            for (int j = 0; j < t; j++) {
                cout << "*";
            }
            for (int k = 0; k < 2 * (n - t); k++) {
                cout << " ";
            }
            for (int j = 0; j < t; j++) {
                cout << "*";
            }
            t--;
        }
        if (i != 2 * n - 1) {
            cout << endl;
        }
    }
    return 0;
}