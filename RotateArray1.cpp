class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int f=0, sum =0, ans = INT_MIN;
        int n = nums.size();
        for(int i =0;i<n;i++){
            sum+=nums[i];
            f+=(nums[i]*i);
        }
        ans = max(f,ans);
        for(int i = n-1;i>0;i--){
            f+=(sum-nums[i]*n);
            ans=max(ans,f);
        }
        return ans;
    }
};
