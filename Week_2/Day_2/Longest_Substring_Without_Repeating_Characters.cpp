class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;   /*We use two pointer l and r to manage the sliding window to find longest substring*/
        int r=0;
        unordered_map<char,int> mp;  //We use unordered map to store the frequency and check for repeating characters
        int n=s.size();
        int maxlen=0;
        while(r<n){  
             //the loop works until the right pointer reaches end of string
            if(mp.count(s[r])==1){
                /*Count fn returns 1 if character is already present in string
                So we check is current character is already present or not.
                If it is present we shrink the window by removing leftmost character from map and inc left ptr*/
                mp.erase(s[l]);
                l++;
            }
            else{
            mp[s[r]]++; /*If it isn't already in string we store it's frequency using map and check if it is max
                         substring  and increase the window size bhy increacing r pointer*/
              maxlen=max(maxlen,r-l+1);
              r++;
            }
        }
        return maxlen;
    }
};