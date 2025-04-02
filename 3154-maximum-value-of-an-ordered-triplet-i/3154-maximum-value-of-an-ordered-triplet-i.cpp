class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
       long long  int n = nums.size();
       long long  int ans =0;
       for(long long int i =0;i<n;i++){
        for(long long int j = i+1;j<n;j++){
            for(long long int k=j+1;k<n;k++){
                ans=max(ans,(long long int) (nums[i]-nums[j])*nums[k]);
            }
        }
       }
       return ans;
    }
};