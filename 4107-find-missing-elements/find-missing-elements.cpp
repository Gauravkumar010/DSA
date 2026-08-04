class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int start = nums[0];
        int end = nums[nums.size()-1];
        int j = 0;
        while(start != end){

            if(nums[j] == start){
                j++;
                start++;
            }
            else{
                ans.push_back(start);
                start++;
            }
        }
        return ans;

    }
};