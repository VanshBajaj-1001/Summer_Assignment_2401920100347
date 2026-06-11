class Solution {
public:
vector<string> ans;
void solve(int open,int close,int n,string curr){
    if(open==n && close==n){  //base condition that runs when valid combination is formed
        ans.push_back(curr);
        return;
    }
    if(open<n){  // add an opening bracket if it is still left
        solve(open+1,close,n,curr+"(");
    }
    if(open>close){//  add a closing bracket if it is still left  
        solve(open,close+1,n,curr+")");  //check the condition before so that string isn't invalid
    }
}
    vector<string> generateParenthesis(int n) {
        solve(0,0,n,"");
        return ans;
    }
};