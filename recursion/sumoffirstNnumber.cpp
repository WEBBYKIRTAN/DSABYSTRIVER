#include<iostream>
using namespace std;
// parametrized way
// void sumoffirstNumber(int i,int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }
//     sumoffirstNumber(i-1,sum+i);
// }
// main(){
//     int n;
//     cin>>n;
//     sumoffirstNumber(n,0);
// }

// functional way
int sumoffirstnumber(int n){
    if(n==0)
    return 0;
    return n+sumoffirstnumber(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sumoffirstnumber(n);
}