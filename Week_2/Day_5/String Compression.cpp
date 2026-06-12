class Solution {
public:
    int compress(vector<char>& chars) {
        int write=0;  //this is used as write pointer that is used to wwrit e the character and there occurences
        int i=0;  //i is used as read pointer to read character in array if they matc or not
        while(i<chars.size()){
            char current=chars[i]; //we take a character 
            int count=0;
            while(i<chars.size() && chars[i]==current){
                count++; //here we count all the occurences of the  current character
                i++;
            }
            chars[write]=current; //here we write the character and move write ptr frwd
            write++;
            if(count>1){
                string cnt=to_string(count);  //we convert count to string essentially to store in in char array 
                                              //and to store double digit occurences like 12 in "1","2" this way
                for(char ch:cnt){
                    chars[write]=ch;
                    write++;
                }
            }
        }
        return write;
    }
};