class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift=0;
        while(left<right){
            left>>=1;
            right>>=1;
            shift++;
        }
        return left<<shift;
    }
};

//Optimal Sol
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while(left<right){
            right=right&(right-1);
        }
        return left&right;
    }
};
//Brute Force Approach
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int x=left;
        for(int i=left+1;i<=right;i++){
            x=x&i;
            if(x==0){
                return 0;
            }
        }
        return x;
        
    }
};
