#include<bits/stdc++.h>
using namespace std; 
vector<int> twoSum(vector<int>& nums, int target) {
    // for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]+nums[j]==target){
    //             return{i,j};
    //         }
            
    //     }
    // }
//   map<int,int>mpp;
//   int n=nums.size();
//   for(int i=0;i<n;i++){
//     int num=nums[i];
//     int more_needed=target-num;
//     if(mpp.find(more_needed)!=mpp.end()){
//         return{mpp[more_needed],i};
//     }
//     mpp[num]=i;
//   }
int left=0;
int right=nums.size()-1;
sort(nums.begin(),nums.end());
while(left<right){
    int sum=nums[left]+nums[right];
    if(sum==target){
        return {left,right}; ;
    }
    else if(sum<target)left++;
    else right--;
}
return {0,0};
}   
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }   
    vector<int>ans=twoSum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }   
}