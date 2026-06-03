class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int majority=nums[0];
        int c=0;
        for(int i=0;i<n;i++){
            c=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    c++;
                }
            }
            if((n/2)<c){
                return nums[i];
            }
        }
        return{};
       
    }   
};