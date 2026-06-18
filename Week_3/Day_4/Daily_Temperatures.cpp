class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n,0);
        stack<int> st; //stack to store the indices of the day
        for(int i=0;i<n;i++){           
        while(st.empty()!=1 && temperatures[i]>temperatures[st.top()]){//if stack is not empty and current temp is greater than temp at top of stack
           int previndex=st.top(); //we store the index of the prev highest temp
           st.pop(); //pop the prev highest temp
           ans[previndex]=i-previndex;// we calculate how many days we have to wait
        }
        st.push(i);   //push the current day's index onto stack
        }
        return ans;
    }
};