class Solution {
public:
//brute force solution
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
            
        }
        return nums.size();
        
    }
};