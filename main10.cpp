#include<iostream>
#include<string>
using namespace std;
bool palindrome(string str1){
    int left = 0;
    int right = str1.length() - 1;
    while(left<right){
        if(str1[left] == str1[right]){
            return true;
            left++;
            right--;
        }
    }
    return false;
}
int main(){
    return  0;
}