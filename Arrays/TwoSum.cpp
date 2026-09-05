class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];
            int more=target-a;
            if(mpp.find(more)!=mpp.end()){
                return{mpp[more],i};
            }
            mpp[a]=i;
        }
        return{-1,-1};
    } 
}; 
//Brute force 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            if(i!=j && nums[i]+nums[j]==target){
                return {i,j};
            }

        }
      }
      return{-1,-1};
    }
};
