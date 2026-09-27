#include<iostream>
using namespace std;
bool ispalindrome(int i, string &s){
    if(i>=s.size()/2)
    return true;
    if(s[i]!=s[s.size()-i-1])
    return false;
    return ispalindrome(i+1,s);
}
int main(){
    string s="madsm";
    cout<<ispalindrome(0,s);

}