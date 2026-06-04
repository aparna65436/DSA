class Solution {
public:
 int missingNumber(vector<int>& nums) {
   //Optimal solution by XOR Operator  
      int n=nums.size();
      int XOR=0;
     // XOR of all numbers in range[0,n]
      for(int i=0;i<=n;i++){
        XOR=XOR^i;
      }
      //XOR of all numbers in given array
      for(auto it:nums){
        XOR=XOR^it;
      }
      //missing number
      return XOR;
    }
};
