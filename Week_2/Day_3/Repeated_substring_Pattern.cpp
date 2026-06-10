class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp=s+s;// we double the string
        temp.pop_back();
        /*We remove the last and first character from the newly created string*/
        temp=temp.substr(1);/*We remove the two characters to remove the existance of occurences of s that exist 
                              because of concatenation*/
        int pos=temp.find(s);/*if s still exists inside the modified string then s must be made by repeating a smaller
                               string inside s*/
        if(pos!=-1){
            return true;
        }
        return false;
    }
};