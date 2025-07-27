class Solution {
public:
    int mySqrt(int x) {
        
        if(x==0) return 0;
        if(x==1) return 1;

        long long st = 0, end = x;
        int ans = -1;

        while (st<=end){
            long long mid = st + (end-st)/2;
        
            if(mid*mid <= x){
                ans = mid;
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }
};