class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){  //If the size of s1 is greater than s2 then permutation of s1 cannot be in s2
            return false;
            }
            vector<int> f1(26,0);  //since all character are in lowercase so we store frequency in array as it improves traversal time
            vector<int> f2(26,0);  // we can also use unordered map instead of array
            /*We use sliding window technique to solve this.We calculate the freq of s1 string and the take a sliding window of 
            size of s1 in s2 And check the frequency of charactyer in window if they match with frequency of s1 then it contains
            permutation of s1 if not we update the window*/
            
            for(char ch:s1){
                f1[ch-'a']++;
            }
            int k=s1.size();
            for(int i=0;i<k;i++){
             f2[s2[i]-'a']++;
            }
            if(f1==f2){
                return true;
            }
            for(int i=k;i<s2.size();i++){// We update the window 
                f2[s2[i]-'a']++;  //add element from front
                f2[s2[i-k]-'a']--;// remove  element from left
                if(f1==f2){
                    return true;  // if anyu time freq match then it returns true
                } 
            }
return false;
        
    }
};