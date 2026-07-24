class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for (int num : nums) freq[num]++;

        int n = nums.size();
        vector<vector<int>> bucket(n + 1);

        for (auto x : freq) {
            bucket[x.second].push_back(x.first);
        }

        vector<int> ans;
        for (int i = n; i >= 1; i--) {
            if (k > 0) {
                if (!bucket[i].empty()) {
                    int j = 0;
                    while (k > 0 && j < bucket[i].size()) {
                        ans.push_back(bucket[i][j]);
                        j++;
                        k--;
                    }
                }
            } else {
                break;
            }
        }

        return ans;
    }
};
