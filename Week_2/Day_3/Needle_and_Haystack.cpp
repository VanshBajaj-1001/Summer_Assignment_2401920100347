class Solution {
public:
    int strStr(string haystack, string needle) {  
        int n=needle.size();
        int m=haystack.size();
        if(m<n){      //if haystack is smaller than needle then it is not possible
            return -1;
        }             
        for(int i=0;i<m;i++){   /*We use two pointer the j pointer is used to match if the letter is same */
            int j=0;
            while(j<n && haystack[i+j]==needle[j]){   /* if character matches then we move to next character  if it doesn't match
                then we move i pointer  */
                j++;
            }
            if(j==n){
                return i;
            }
        }
        return -1;
    }
};