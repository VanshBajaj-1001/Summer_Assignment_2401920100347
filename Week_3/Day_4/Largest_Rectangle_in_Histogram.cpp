class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size(); /*We will store index in the stack.
         Stack is used to keep the bars in  increasing order of height
         When we encounter a bar of shorter height than the bar at top of stack we have found the right boundary we pop the top bar
         the previous bar to current height will be its left boundary*/

        stack<int> st; // we will store index of bars in stack
        int maxarea = 0;
        for (int i = 0; i <= n; i++)
        { // this is uded to find the right boundary
            while (st.empty() != 1 && (i == n || heights[st.top()] > heights[i]))
            {                              // we check when stack ius not empty and find if the bar has shorter height than the height of bar at top of stack
                int h = heights[st.top()]; // we store the index this is the height
                st.pop();
                int left; // now we cal culate left boundary
                if (st.empty())
                { // if stack is empty then left boundary is -1
                    left = -1;
                }
                else
                {
                    left = st.top(); // else the top after popping the stack is left boundary
                }
                int width = i - left - 1;          // finding the width
                maxarea = max(maxarea, h * width); // calc the maxarea
            }
            st.push(i); // push the height of bar onto top of stack
        }
        return maxarea; // returning the maxarea
    }
};