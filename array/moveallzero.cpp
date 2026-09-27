#include<bits/stdc++.h>
using namespace std;
  void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       vector<int>temp;
       // store all non zero into temp
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
            temp.push_back(nums[i]);
        }
        // temp to nums arr
        int nz=temp.size();
        for(int i=0;i<nz;i++){
            nums[i]=temp[i];
        }
        // all zero to nums arr
        for(int i=nz;i<n;i++){
            nums[i]=0;
        }
    }
    int main(){
        int n;
        cin>>n;
       vector <int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        moveZeroes(arr);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
