##Approach 1
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       vector<int>temp(nums.size());
       for(int i=0;i<nums.size();i++){
         temp[(i+k)%n]=nums[i];
       }
       nums=temp;
    }
}; 

## Rotate Array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       k=k%n;
       reverse(nums.begin(),nums.end());      // Reverse all the elements
       reverse(nums.begin(),nums.begin()+k);  // Reverse first K elements(0,k-1)
       reverse(nums.begin()+k,nums.end());    // Reverse remaining elements(k,n-1)
    }
}; 
