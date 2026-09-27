#include<bits/stdc++.h>
using namespace std;
vector <int> leaders(vector<int> &arr){
    
    // vector<int> leaders;
    // int max_from_right=arr.back();
    // leaders.push_back(arr.back());
    // for(int i=arr.size()-2;i>=0;i--){
    //     if(arr[i]>max_from_right){
    //         leaders.push_back(arr[i]);
    //         max_from_right=arr[i];
    //     } 
    // }
    // reverse(leaders.begin(),leaders.end());
    // return leaders;
}
int main(){
    vector<int> array={10,22,12,3,0,6};
    vector<int> result=leaders(array);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}