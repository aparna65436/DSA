class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int Xor=0;
        for(int i=0;i<=nums.size();i++){
             Xor=i^Xor;
        }
        for(auto x:nums){
            Xor=x^Xor;
        }
        return Xor;
        
    }
};
