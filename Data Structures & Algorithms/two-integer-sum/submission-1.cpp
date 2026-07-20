class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans(2);

        for (int i = 0; i < nums.size(); i++) {
            int remaining = target - nums[i];
            if (mp.find(remaining) != mp.end()) {
                ans[0] = mp[remaining];
                ans[1] = i;
                break;
            }

            mp[nums[i]] = i;
        }

        return ans;
    }
};
