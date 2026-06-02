class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto i:mpp){
            if(i.second>=2)
            {
                return true;
            }
        }
        return false;
    }
};