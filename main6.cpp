#include<iostream>
#include<string>
using namespace std;
string reverse(string str1){
    string result;
    for(int i = str1.size() - 1; i>=0 ; --i){
        result += str1[i];
    }
    return result;
}
int main(){
    return 0;
}