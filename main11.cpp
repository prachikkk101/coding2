#include<iostream>
#include<string>
using namespace std;
bool isSubSeq(const string& s1, const string& s2)
{
    int m = s1.length(), n = s2.length();
    if (m > n) return false;
  
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    return i == m;
}
int main(){
    return 0;
}//to check if one string is the subsequence of the other