class Solution {
public:
    int maxArea(vector<int>& height) {
    
        int left=0;
        int right=height.size()-1;
        int maxwater=0;
        /* in the 2 pointer approach we start with the biggest container possible according to their width
        left from 0 and right from n-1 we do not change the ptr with higher height(value) to lower or greater height because the
         lower valued ptr remains same  and height reduces which does make sense as we have to find larger area*/
        while(left<right){
            int width=right-left;
            int ht=min(height[left],height[right]);
            int water=ht*width;
            maxwater=max(maxwater,water);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxwater;
        
    }
};
/* one simpler approach would be to check all possible container and then calculate the area of each and compare.
But that solution would requre to loops to iterate to find all possible conatibers which would increase the time complexity.
we start left ptr with 0 to n-2 and right ptr to i+1 to n-1 and similary calulate total and max water as above  */