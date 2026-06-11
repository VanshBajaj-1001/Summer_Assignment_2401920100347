class Solution {
public:
    string decodeString(string s) {
        stack<int> count;  //store repeatition count like 3 in3[a]
        stack <string> str;  //used to store string before [ is found
        string decoded_str=""; //used to find decoded str
        int num=0;
        for(char ch:s){
            if(isdigit(ch)){
                num=num*10 +(ch-'0');  //it is used to convert string to digit
            }
            else if(ch=='['){
                count.push(num);  //we save the current string count 
                str.push(decoded_str);//we save the current string state
                // now we reset num and decodedstr to 0 and "" so that we can redo th eprocess for inside the bracket string
                num=0;
                decoded_str="";
            }
            else if(ch==']'){
                int repeat=count.top(); //used to get repeatition count
                count.pop();
                string temp=str.top();  //this is used to get the string before the bracket started
                str.pop();
                for(int i=0;i<repeat;i++){  // this is used to create dedoded string by inserting repeated characters
                    temp=temp+decoded_str;
                }
                decoded_str=temp;
            }
            else{
                decoded_str+=ch;
            }
        }
        return decoded_str;
    }
};