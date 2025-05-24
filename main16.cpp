#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void findSmallestAndLargestWord(string str) {
    string word;
    string smallest = "", largest = "";
    stringstream ss(str);

    while (ss >> word) {
        if (smallest == "" || word.length() < smallest.length()) {
            smallest = word;
        }
        if (largest == "" || word.length() > largest.length()) {
            largest = word;
        }
    }

    cout << "Smallest word: " << smallest << endl;
    cout << "Largest word: " << largest << endl;
}

int main() {
    string str = "C++ is a powerful general purpose programming language";
    findSmallestAndLargestWord(str);
    return 0;
}
