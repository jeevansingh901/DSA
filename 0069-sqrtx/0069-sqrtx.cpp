class Solution {
public:
    int mySqrt(int x) {
        long long s=0,  end=INT_MAX;
        long long ans=0;
        
        while(s<=end){
            long long mid= (s+end)>>1;
            
            if(mid*mid<=x){
                ans=mid;
                s=mid+1;
                
            }
            else{
                end=mid-1;
            }
            
        }
        return ans;
    }
};