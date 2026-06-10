class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;/*we use two pointers to traverse through two strings */
        int j=0;// i pointer to traverse through s string and j ptr to travrese thrrogh t string
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){ //if the character matches then we move i ptr forward
                i++;
            }
            j++;//if it does not match or after it matches then j moves forward
        }
        if(i==s.size()){
            return true ; //if i reaches the end of s string means it is a subsequence 
        }
        return false;
    }
};