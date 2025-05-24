#include<iostream>
#include<string>
using namespace std;
bool kanagram(string str1,string str2,int k){
    int i,j;
    int n = str1.length();
    int m = str2.length();
    if(n != m){
        return false;
    }
    while (i<n && j<m)
    {
        if(str1[k] != str2[k]){
            return false;
        }
        i++;
        j++;
    }
    return true;
    
}
int main(){
    return 0;
}//wanna check k anagram
//must contain same number of characters
//and if we exchange k index character then check whether they are anagram or not