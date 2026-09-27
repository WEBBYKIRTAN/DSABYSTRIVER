#include<bits/stdc++.h>
using namespace std;
int longestsubarray(vector<int>& arr,int k){
    int n=arr.size();
    int maxlen=0;
    int left=0,right=0;
    long long sum=0;
while(right<n){
    while(left<=right && sum>k){
        sum-=arr[left];
        left++;
    }
    if(sum==k){
        maxlen=max(maxlen,right-left+1);
    }
    right++;
    if(right<n)
    sum+=arr[left];
}

    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum+=arr[j];
    //         if(sum==k){
    //             len=max(len,j-i+1);
    //         }
    //     }
    
    // }
return maxlen;

}
int main(){
    vector<int> arr={1,2,3,1,1,1,1,4,2,3};
    int k=3;
    int result=longestsubarray(arr,k);
    cout<<result;
}