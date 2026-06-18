class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;//map is use to store the elemt as key and next greater element as value
        stack <int> st;
        for(int i=nums2.size()-1;i>=0;i--)//we find next greater element for all elements in nums2
        {
            int curr=nums2[i];
            while(st.empty()!=1 && st.top()<=curr){ //if stack is not empty and the top of stack is is less than current element then we pop the stack
                st.pop();
            }
            if(st.empty()){  //if stack is empty then we insert -1 in its next greater element
                mp[nums2[i]]=-1;
            }
            else{
                mp[nums2[i]]=st.top();//store the next greater element
            }
            st.push(nums2[i]); 
    }
    vector<int> ans;
    for(int n:nums1){  //ans array is used to store next greater elements of nums1 array elements
        ans.push_back(mp[n]);
    }
    return ans;
    }
};