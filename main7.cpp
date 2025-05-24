#include<iostream>
#include<vector>
using namespace std;
bool binary(string str){
    for(int i = 0 ; i< str.length() ; i++){
        if(str[i] != '0' && str[i] != '1'){
            return false;
        }
    }
    return true;
}
int main(){
    return 0;
}