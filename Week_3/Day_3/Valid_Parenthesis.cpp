class Solution {
public:
    bool isValid(string s) {
        stack <char> st; //store opening brackets
        for(char ch:s){ //if current character is opening bracket then push it onto stack
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{    //if stack is empty there is no matching
                if(st.empty()){
                    return false;
                }
            
            if((ch==')'&& st.top()=='(')||(ch=='}'&&st.top()=='{')||(ch==']'&&st.top()=='['))
            {  //check if closing bracket matches
                st.pop();
            }
            else{
                return false;
            }
        }
        }
        return st.empty(); //if stack is emptythen all were matched
    }
};