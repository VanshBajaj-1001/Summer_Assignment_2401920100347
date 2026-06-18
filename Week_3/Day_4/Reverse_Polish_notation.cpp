class Solution {
public:
    int evalRPN(vector<string>& tokens) { //the logic used is that if it is a number then we push it onto stack but if it is operator 
        //then we pop top two elements and perform operation on them an store result at top of tack
        stack<int> st;  //we use stack to evaluate reverse polish notation 
        for(string s:tokens){
            if(s=="+"||s=="-"||s=="*"||s=="/"){
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(s=="+"){st.push(a+b);}
                else if(s=="-"){st.push(a-b);}
                else if(s=="*"){st.push(a*b);}
                else{st.push(a/b);}
            }
            else{
                st.push(stoi(s)); //if token is a number then we convert it from string to integer
            }
        }
        return st.top(); //final result is stored at the top of stack
    }
};