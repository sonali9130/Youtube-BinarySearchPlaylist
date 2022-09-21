class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1){
            return true;
        }
        else if(num<4){
            return false;
        }
        
        int lo=2, hi=(num>>1);
        
        while(lo<=hi){
            int mid=lo+((hi-lo)>>1);
            long long prod=mid*(long long)mid;
            
            if(prod==num){
                return true;
            }
            else if(prod>num){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return false;
    }
};
