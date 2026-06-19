class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        deque<int> dq; // we use deque because we req a data structure that acts as queue in front and as stack in back
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            while (dq.empty() != 1 && dq.front() <= i - k)
            {                   // we checkif deque is not empty and if the indices is in current window boundation or not
                dq.pop_front(); // if the index is not in current window then we remove the index from the front of queue
            }
            while (dq.empty() != 1 && nums[dq.back()] < nums[i])
            {                  // if the stackis not empty and the prev max is less than the new no
                dq.pop_back(); // then we pop all no in deque less than current number
            }
            dq.push_back(i); // or else we push the index of element in the deque
            if (i >= k - 1)
            {
                ans.push_back(nums[dq.front()]); // first window forms at index k-1 therefore for each window formed we push the maximum element in window into ans array
            }
        }
        return ans;
    }
};