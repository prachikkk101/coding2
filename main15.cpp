#include<iostream>
#include<string>
using namespace std;
bool chk(string str1,string str2){
    int n = str1.length();
    int m = str2.length();
    int last = str2[m-1];
    int i,j;
    if(n != m){
        return false;
    }
    while(str1[i] != str2[i]){
        str2[i] = str2[i-1];
        str2[0] = last;
        i++;
    }

int main(){
    return 0;
}