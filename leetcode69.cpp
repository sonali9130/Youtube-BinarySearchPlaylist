class Solution {
public:
    int mySqrt(int num) {
        if(num==0){
            return 0;
        }
        else if(num<4){
            return 1;
        }
        int lo=2, hi=num/2;
        while(lo<=hi){
            int mid=lo+((hi-lo)>>1);
            long long prod=mid*(long long)mid;
            
            if(prod==num){
                return mid;
            }
            else if(prod>num){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return hi;
    }
};
