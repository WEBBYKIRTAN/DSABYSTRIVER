#include<iostream>
using namespace std;
int factorialofN(int n){
    if(n==0)
    return 1;
    return n*factorialofN(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorialofN(n);
}