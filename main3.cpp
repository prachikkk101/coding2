#include<iostream>
#include<string>
using namespace std;
string update(string str1,int pos , char c){
    str1.insert(str1.begin() + pos,c);
    return str1;
}
int main(){
    return 0;
}//insert a character