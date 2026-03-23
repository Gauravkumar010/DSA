class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        // for(int i=0;i<nums.size();i++){
        //     if(target == nums[i]){
        //         return i;
        //     }
        // }
        // return -1;
        
        //************ Optimal solution **************

        int low = 0;
        int high = nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<= nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
               if(nums[mid]<=target && target<= nums[high]){
                    low = mid+1;
                }
                else{
                   high  = mid-1;
                }

            }
        }
        return -1;

    }
};