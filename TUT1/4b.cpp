#include <iostream>
using namespace std;
int main() {
 int row1, col1, row2, col2;
 cin >> row1 >> col1;
 cin >> row2 >> col2;
 if (col1 != row2) {
 cout << "Multiplication not possible";
 return 0;
 }
 int mat1[100][100], mat2[100][100], mat3[100][100];
 for (int i = 0; i < row1; i++) {
 for (int j = 0; j < col1; j++) {
 cin >> mat1[i][j];
 }
 }
 for (int i = 0; i < row2; i++) {
 for (int j = 0; j < col2; j++) {
 cin >> mat2[i][j];
 }
 }
 for (int i = 0; i < row1; i++) {
 for (int j = 0; j < col2; j++) {
 mat3[i][j] = 0;
 for (int k = 0; k < col1; k++) {
 mat3[i][j] += mat1[i][k] * mat2[k][j];
 }
 }
 }
 for (int i = 0; i < row1; i++) {
 for (int j = 0; j < col2; j++) {
 cout << mat3[i][j] << " ";
 }
 cout << "\n";
 }
 return 0;
}