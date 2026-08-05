class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for (int i = nums[0]; i <= nums[nums.size() - 1]; i++) {
            int c = 0;

            for (int j = 0; j < nums.size(); j++) {
                if (i == nums[j]) {
                    c = 1;
                    break;
                }
            }

            if (c == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
