#include<bits/stdc++.h>
using namespace std;

// int secondLargestElement(vector<int>& nums) {
//         //your code goes here
//         if(nums.size()<2) return -1;
//         int largest=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>largest)
//             largest=nums[i];.3
        
        
//         int slargest=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>slargest && nums[i]!=largest)
//             slargest=nums[i];
//         }

//         if(slargest == INT_MIN) return -1;  
//         return slargest;

//     }
// }
// second largest

// int secondLargestElement(vector<int>& nums) {
//         //your code goes here
//         if(nums.size()<2) return -1;
//         int largest=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>largest)
//             largest=nums[i];.3
        
        
//         int slargest=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>slargest && nums[i]!=largest)
//             slargest=nums[i];
//         }

//         if(slargest == INT_MIN) return -1;  
//         return slargest;

//     }
// }

// int secondlargest(vector<int> &a,int n){
//     int largest=a[0];
//     int slargest=-1;
//     for(int i=1;i<n;i++){
//         if(a[i]>largest){
//             slargest=largest;
//             largest=a[i];
//         }
//         else if(a[i]<largest && a[i]>slargest){
//              slargest=a[i];
//   }
//     }
//     return slargest;

// }
// int main(){
//     int x;
//     cin>>x;
//     vector<int> a(x);
//     for(int i=0;i<x;i++){
//         cin>>a[i];
//     }
//     cout<<secondLargest(a);
// }

// second smallest
int secondsmallest(vector<int> &a, int n){
    int smallest=a[0];
    int ssmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            ssmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]!=smallest && a[i]<ssmallest){
                   ssmallest=a[i];
        }

    }
    return ssmallest;
}
int main(){
    int x;
    cin>>x;
    vector<int> a(x);
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    cout<<secondsmallest(a,x);
}