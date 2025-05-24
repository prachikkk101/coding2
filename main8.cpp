#include<iostream>
#include<string>
using namespace std;
string camelcase(string str){
    for(int i = 0 ; i<str.length() ; i++){
        string result;
        if(str[i] == ' '){
            result += str[i];
        }
        if(str[i] == ' '){
            str[i + 1] = uppercase(str[i+1])
        }
    }
}
int main(){
    return 0;
}