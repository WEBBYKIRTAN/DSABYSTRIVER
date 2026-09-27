#include <bits/stdc++.h>
using namespace std; 
void arrayusingrecursion(int i,vector<int>& arr,int n){
    if(i>=n/2)
    return;
    swap(arr[i],arr[n-i-1]);
    arrayusingrecursion(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
  vector <int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    arrayusingrecursion(0,arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
}