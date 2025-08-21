#include <iostream>
using namespace std;
int main() {
 int size;
 cout << "Enter the size of the array: ";
 while (!(cin >> size) || size <= 0) {
 cin.clear();
 cin.ignore(10000, '\n');
 cout << "Invalid size! Enter again: ";
 }
 int arr[size];
 cout << "Enter the elements of the array: ";
 for (int i = 0; i < size; i++) {
 while (!(cin >> arr[i])) {
 cin.clear();
 cin.ignore(10000, '\n');
 cout << "Invalid input! Enter again: ";
 }
 }
 cout << "The unique array is: ";
 for (int i = 0; i < size; i++) {
 bool duplicate = false;
 for (int j = i + 1; j < size; j++) {
 if (arr[i] == arr[j]) {
 duplicate = true;
 break;
 }
 }
 if (!duplicate) cout << arr[i] << " ";
 }
 cout << endl;
 return 0;
}