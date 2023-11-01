class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        int sum1=0;
        int sum2=0;
        int maxi=INT_MIN;
        int mini=INT_MAX;   
        for(auto i: nums)
        {
            sum+=i;
            sum1+=i;
            sum2+=i;
            maxi=max(maxi,sum1);
            if(sum1<0) sum1=0;
           mini=min(sum2,mini);
            if(sum2>0) sum2=0;
        }
        return (sum==mini)?maxi:max(maxi,sum-mini);  
    }
};
