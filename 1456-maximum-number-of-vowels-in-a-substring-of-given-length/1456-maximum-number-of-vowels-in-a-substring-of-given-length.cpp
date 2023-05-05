class Solution {
public:
    int maxVowels(string s, int k) {
        int vowels[26] = {1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1};
        int maxVowel=0, currVowel=0;
        
        for(int i=0;i<s.size();i++){
            
            currVowel +=vowels[s[i]-'a'];
            
            if(i>=k){
                currVowel -=vowels[s[i - k] - 'a'];
            }
            maxVowel=max(maxVowel, currVowel);
        }
        return maxVowel;
    }
};