class Solution {
public:
    //Dutch National Flag Algorithm
    void sortColors(vector<int>& nums) {
       int start=0;
       int mid=0;
       int end=nums.size()-1;
       while(mid<=end){
            if(nums[mid]==0){
                swap(nums[start],nums[mid]);
                start++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[end]);
                end--;
            }
       }
    }
};
#SORT COLORS

##Approach Used Dutch National Flag Algorithm with three pointer

-start for 0 -mid for current element -end for 2

#Time Complexity O(n)

#Space Complexity O(1)
