
class Solution {
public:
    int firstBadVersion(int n) {
        long long l = 1,r= n;
        while(l<=r){
            long long mid = (l+r)/2;
            if(isBadVersion(mid)){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
            
        }
        return l;
    }
};

//Explanation
//linear search will give TLE an n is very large
//Above solution is based on simple binary search
