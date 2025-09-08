#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    int r2, c2;
    cin >> r2 >> c2;
    
    int b[r2][c2];
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    cout << "Matrix Multiplication:" << endl;
    
    if (c != r2) {
        cout << "Not possible" << endl;
    } else {
        int mul[r][c2] = {0};
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c2; j++)
                for (int k = 0; k < c; k++)
                    mul[i][j] += a[i][k] * b[k][j];

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c2; j++)
                cout << mul[i][j] << " ";
            cout << endl;
        }
    }

    cout << "Row sums of A:" << endl;
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++)
            sum += a[i][j];
        cout << sum << endl;
    }

    cout << "Column sums of A:" << endl;
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++)
            sum += a[i][j];
        cout << sum << endl;
    }

    cout << "Transpose of A:" << endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }

    return 0;
}
