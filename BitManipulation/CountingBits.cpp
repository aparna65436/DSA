//Brute force approach (using Brian Kernighan's algorithm)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int temp=i;
            int c=0;
            while(temp!=0){
                temp=temp&(temp-1);
                    c++;          
            }
            ans.push_back(c);
        }
        return ans;
        
    }
};
