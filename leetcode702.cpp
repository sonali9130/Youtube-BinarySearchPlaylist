//BINARY SEARCH APPROACH-1
class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        int lo=0, hi=1;
        while(1){
            int val=reader.get(hi);
            if(val==target){
                return hi;
            }
            else if(val==INT_MAX || val> target){
                hi--;
                break;
            }
            else{
                lo=hi+1;
                hi<<=1;//hi*=2
            }
        }
        
        while(lo<=hi){
            int mid=lo+((hi-lo)>>1);
            int val=reader.get(mid);
            if(val==target){
                return mid;
            }
            else if(val==INT_MAX || val>target){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return -1;
    }
};

//BINARY SEARCH APPROACH-2
class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        int lo=0, hi=9999;
        
        while(lo<=hi){
            int mid=lo+((hi-lo)>>1);
            int val=reader.get(mid);
            if(val==target){
                return mid;
            }
            else if(val>target){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return -1;
    }
};
