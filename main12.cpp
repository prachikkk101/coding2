#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool anagrams(string str1, string str2){
    int i = 0, j = 0;  // initialize i and j
    int n = str1.length();
    int m = str2.length();

    if(n != m){        // replace while with if
        return false;
    }

    // Sort both strings and compare character by character
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    while(i < n && j < m){
        if(str1[i] != str2[j]){
            return false;
        }
        i++;
        j++;
    }
    return true;
}

int main(){
    string str1 =  "geeks";
    string str2 = "kseeg";
    cout << (anagrams(str1, str2) ? "true" : "false") << endl;
    return 0;
}//frequency //sort krke while loop
