#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[1000][1000]; // Fixed array declaration

    // Input array elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int key;
    cin >> key;

    // Start from the top-right corner
    int i = 0, j = m - 1;

    while (i >= 0 && j >= 0 && i < n && j < m) {
        if (a[i][j] == key) { // Fixed array name
            cout << 1;
            return 0;
        }
        if (a[i][j] < key) {
            i++; // Move down
        } else {
            j--; // Move left
        }
    }

    // If not found
    cout << 0;
    return 0;
}
