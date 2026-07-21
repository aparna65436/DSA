class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        while(n!=1){
            while(s.count(n)){
                return false;
            }
            s.insert(n);
            int sum=0;
            while(n>0){
                int r=n%10;
                sum=r*r+sum;
                n=n/10;
            }
            if(sum==1||sum==7){
                return true;
            }
            n=sum;
        }
        return true;
    }
};
