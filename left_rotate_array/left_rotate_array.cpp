class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k==nums.size()){
            return;
        }
        int d=k;
        int n=nums.size();
        if(k>n){
            d=k%n;
        }

        reverse(nums.begin(),nums.begin()+n);
        reverse(nums.begin(),nums.begin()+d);
        reverse(nums.begin()+d,nums.begin()+n);
    }
};