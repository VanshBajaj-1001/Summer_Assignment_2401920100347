class Solution {
public:
    string longestPalindrome(string s) {
        int start=0;
        int maxlen=1;
        for(int i=0;i<s.size();i++){
            //odd palindrome string
           int  left=i;       //for odd palindrome there would be a single centre
            int right=i;    /*We keep each element as center and check if it is palindrome*/
            while(left>=0 && right<=s.size() && s[left]==s[right]){
                if(right-left+1>maxlen){
                    maxlen=right-left+1;
                    start=left;
                }
                left--;
                right++;
            }
            //even palindrome string
             left=i;  //even palindrome string has 2 center elements we repeat the same process for even length string
             right=i+1;
             while(left>=0 && right<=s.size() && s[left]==s[right]){
                if(right-left+1>maxlen){
                    maxlen=right-left+1;
                    start=left;
                }
                left--;
                right++;
             }
        }
        return s.substr(start,maxlen);
    }
};