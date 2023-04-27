class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> lmax(height.size());
        vector<int> rmax(height.size());
        int n= height.size();
        lmax[0] = height[0];
        rmax[n-1] = height[height.size()-1];
        
        for(int i=1;i<n;i++){
            lmax[i] = max(lmax[i-1], height[i]);

        }
        for(int i=n-2;i>=0;i--){
            rmax[i] = max(rmax[i+1], height[i]);
        }
        int water =0;
        for(int i=1;i<n-1;i++){
            water+= min(lmax[i], rmax[i])-height[i];
        }
        return water;
    }
};
