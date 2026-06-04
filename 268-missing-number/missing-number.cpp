class Solution {
public:
 int missingNumber(vector<int>& nums) {
   //Optimal solution by Basic Mathematics 
      int n=nums.size();
      int sum1=0;
      int sum=(n*(n+1))/2;
      for(int i=0;i<n;i++){
        sum1=sum1+nums[i];
      }
      return sum-sum1;
    
    }
};
