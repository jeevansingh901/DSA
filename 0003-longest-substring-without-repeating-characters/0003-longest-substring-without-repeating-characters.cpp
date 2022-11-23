class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int > mpp;
         
        int maxi=0;
    
        int k=0,i=0;
        while(i<s.length()){
            if(mpp.find(s[i])==mpp.end()){
                
                  mpp[s[i++]]++;
                    
                
                maxi=max(i-k,maxi);
                cout<<"M "<<i-k<<" I "<<i<<" K "<<k<<endl;
            }
            else{
                mpp.erase(s[k++]);
            }
        }
        return maxi;  
    }
};