class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j =i+1;j<n;j++){
                int answer = nums[i] + nums[j];
            if(answer == target){
                return  {i,j};
            }
            }
            
        }
        return {};
    }
};