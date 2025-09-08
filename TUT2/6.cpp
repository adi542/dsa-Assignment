#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    cout << "Transpose Matrix:" << endl;
    int transpose[c][r];
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            transpose[i][j] = a[j][i];
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    // Check for symmetry
    if (r == c) {
        bool symmetric = true;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] != transpose[i][j]) {
                    symmetric = false;
                    break;
                }
            }
        }
        cout << "Symmetric: " << (symmetric ? "Yes" : "No") << endl;
    } else {
        cout << "Symmetric: No (Not a square matrix)" << endl;
    }

    // Check if matrix is sparse
    int zeroCount = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] == 0)
                zeroCount++;

    if (zeroCount > (r * c) / 2)
        cout << "Sparse: Yes" << endl;
    else
        cout << "Sparse: No" << endl;

    return 0;
}
