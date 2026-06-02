class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        /*since we have to find maximum average sub array and the window size remains constant k for a testcase then
          then we should find maximum sum subarray so that the average is maximum*/
          int l=0;
          int r=k-1;
          int sum=0;
          for(int i=0;i<k;i++){
             sum=sum+nums[i];
          }
          int maxsum=sum;
          while(r<nums.size()-1){
            sum=sum-nums[l];
            l++;
            r++;
            sum=sum+nums[r];
            maxsum=max(maxsum,sum);
          }
          return (double)maxsum/k;  //Type casting so that calculation error cabn be prevented
    }
};