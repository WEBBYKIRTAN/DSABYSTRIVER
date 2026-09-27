#include<bits/stdc++.h>
using namespace std;        
vector<int> sortArray(vector<int>& nums) {
//     int cnt0=0,cnt1=0,cnt2=0;
//    for(int i=0;i<nums.size();i++){
//     if(nums[i]==0) cnt0++;
//     else if(nums[i]==1) cnt1++;
//     else cnt2++;
//    }
//    int index=0;
//    for(int i=0;i<cnt0;i++){
//     nums[index++]=0;
//    }
//    for(int i=cnt0;i<cnt1+cnt0;i++){
//     nums[index++]=1;
//    }
//    for(int i=cnt0+cnt1;i<nums.size();i++){
//     nums[index++]=2;
//    }
 int low=0,mid=0,high=nums.size()-1;
 while(mid<=high){
    if(nums[mid]==0){
        swap(nums[low],nums[mid]);
        mid++;
        low++;
    }
    else if(nums[mid]==1){
        mid++;
    }
    else{
        swap(nums[mid],nums[high]);
        high--;
    }
 }

}
int main(){
    vector<int> nums={2,0,2,1,1,0};
    sortArray(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}