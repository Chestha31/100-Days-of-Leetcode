//solution 1

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k %=n;
//         reverse(nums.begin(), nums.begin()+n-k);
//         reverse(nums.begin()+n-k, nums.end());
//         reverse(nums.begin(), nums.end());
//     }
// };

//solution 2 
class Solution{
    public: 
    void reverse(vector<int>& nums, int low, int high){
        while(low<high){
            swap(nums[low], nums[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k){
        int n = (int)nums.size();
        k%=n;
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
        
    }

};
