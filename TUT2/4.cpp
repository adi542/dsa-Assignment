#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";

    // Concatenation
    string concat = s1 + s2;
    cout << concat << endl;

    // Reverse s1
    string rev = s1;
    for (int i = 0, j = rev.size() - 1; i < j; i++, j--) {
        char temp = rev[i];
        rev[i] = rev[j];
        rev[j] = temp;
    }
    cout << rev << endl;

    // String comparison
    string x = "Apple", y = "Banana";
    if (x == y)
        cout << "Equal" << endl;
    else if (x < y)
        cout << "First smaller" << endl;
    else
        cout << "First greater" << endl;

    // Word count in a string
    string str = "This is a test";
    int words = 0;
    for (int i = 0; i < str.size(); i++) {
        if ((i == 0 && str[i] != ' ') || (str[i] != ' ' && str[i - 1] == ' '))
            words++;
    }
    cout << words << endl;

    return 0;
}
