class Solution {
public:
    string reverseWords(string s) { /*We use a logic inside our loop where whenever space is found we reverse the words*/
        s=s+" ";//We add space towards the end of our string so condition remains true for last word also
        int start=0;//start var is used to keep track of words which are reversed
        for(int i=0;i<s.size();i++){
            if(i==s.size() || s[i]==' '){  //if i reaches the end of string or if it finds whitespace
                int left=start; //we use two pointers left and right to reverse each word
                int right=i-1;//left for start of word and right for end of word
                while(left<right){ //till both ptr meet
                    swap(s[left],s[right]);  //we swap characters and move left ptr forward and right ptr backward
                    left++;
                    right--;
                }
                start=i+1;
            }
        }
        s.pop_back();// we remove the extra space added at the back so the string length does not change
        return s;
    }
};