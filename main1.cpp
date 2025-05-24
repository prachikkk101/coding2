#include<iostream>
#include<string>
using namespace std;

bool chk(string str1, string str2) {
    if(str1.length() != str2.length()){
        return false;
    }
    for(int i = 0; i < str1.size(); i++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string a = "hello";
    string b = "hello";
    if(chk(a, b)) {
        cout << "Strings are the same" << endl;
    } else {
        cout << "Strings are different" << endl;
    }
    return 0;
}
