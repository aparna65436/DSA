class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        vector<int>v;
        for(int x:nums1){
            mpp[x]++;
        }
        for(auto x:nums2){
            if(mpp[x]>0){
                v.push_back(x);
                mpp[x]=0;
            }
        }
        return v;
    }
};
