class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        //add all non zero element
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        // add all zeroes at end of temp
        int zeroes=n-temp.size();
        for(int j=0;j<zeroes;j++){
            temp.push_back(0);
        }
        // original array change
        for(int k=0;k<n;k++){
            nums[k]=temp[k];
        }
    }
       
};