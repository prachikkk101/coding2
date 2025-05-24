#include<iostream>
#include<string>
using namespace std;
string remove(string str1,int pos){
    string result;
    for(int i = 0 ; i<str1.length() ; i++){
        if(i != pos){
            result += str1[i];
        }
    }
    return result;
}
int main(){
    string str1 = "absser";
    int pos = 1;
    string result = remove(str1,pos);
    cout<<result<<endl;
    return 0;
}//remove a character from a specific index