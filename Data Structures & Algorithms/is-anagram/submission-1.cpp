class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> mp;

        for (char ele : s) mp[ele]++;

        for (char ele : t) {
            if (mp.find(ele) != mp.end()) mp[ele]--;
            else mp[ele]++;
        }

        for (auto x : mp) {
            if (x.second != 0) return false;
        }

        return true;
    }
};
