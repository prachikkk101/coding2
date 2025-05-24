#include<iostream>
#include<string>
using namespace std;
int search(string str1,char ch){
    int n = str1.length();
    for(int i = 0 ; i<n ; i++){
        if(str1[i] == ch){
            return i;
        }
    }
}
int main(){
    return 0;
}