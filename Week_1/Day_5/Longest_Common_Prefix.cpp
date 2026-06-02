class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.empty()){
            return "";
        }
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0];
        string last=strs[n-1];
        int minlength=min(last.size(),first.size());
        for(int i=0;i<minlength;i++){
            if(first[i]!=last[i]){
                break;
            }
                ans+=first[i];
        }
        return ans;
    }
};