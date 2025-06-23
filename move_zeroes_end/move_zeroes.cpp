class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int n=nums.size();
        // two pointer approach
        while( j<n && nums[j]!=0){
            j++;
        }

        if(j==n){
            return;
        }

        for(int i=j+1; i<n ; i++){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
    }
};