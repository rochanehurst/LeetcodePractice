class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
           for (int i=0; i < size(nums); i++)
        {
            for (int j=i+1; j < size(nums); j++) {
                int complement = target - nums[i];

                if (nums[j] == complement) {
                    return {i, j};
                }
            }
        }

    return{};

}
};