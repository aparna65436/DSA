//Optimal Approach
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> st;

        // Step 1: Process nums2
        for(int i = nums2.size() - 1; i >= 0; i--) {
            while(!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            if(st.empty()) {
                mp[nums2[i]] = -1;
            } else {
                mp[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }

        // Step 2: Build answer for nums1
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++) {
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};

//Brute Force Approach
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;

        for(int i = 0; i < nums1.size(); i++){
            int nextGreater = -1;

            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){

                    // search ahead safely
                    for(int k = j + 1; k < nums2.size(); k++){
                        if(nums2[k] > nums2[j]){
                            nextGreater = nums2[k];
                            break;
                        }
                    }
                    break; // important
                }
            }

            v.push_back(nextGreater);
        }

        return v;
    }
};
