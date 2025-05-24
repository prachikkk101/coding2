#include<iostream>
#include<string>
using namespace std;

string remove(string str1, char c) {
    string result;
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != c) {
            result += str1[i];
        }
    }
    return result; // FIXED: Return the new string, not the original
}

int main() {
    string str1 = "abcdeffff";
    char c = 'f';
    string result = remove(str1, c);
    cout << result;
    return 0;
}
