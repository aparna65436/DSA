class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++){
            int maxi=arr[i+1];
            for(int j=i;j<arr.size()-1;j++){
                if(maxi<arr[j+1]){
                    maxi=arr[j+1];
                }

            }
            arr[i]=maxi;
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};
