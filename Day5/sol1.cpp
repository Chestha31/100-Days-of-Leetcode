class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int count=0;
        vector<int> mp(105);
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                for(int k=j-1;k>=0;k--){
                    if(nums[i]+nums[j]+nums[k]<=100){
                        count+=mp[nums[i]+nums[j]+nums[k]];
                    }
                }
            }
            mp[nums[i]]++;
        }
        return count;
    }
};
