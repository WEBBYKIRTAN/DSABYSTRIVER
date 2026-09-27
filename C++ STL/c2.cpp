class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest=nums[0];
        int a= SizeOf(nums)/nums[0];
        for(int i=1;i<a;i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
        }
        return largest;

    }
};