class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> mp;

        for (char ele : s) mp[ele]++;

        for (char ele : t) mp[ele]--;

        for (auto x : mp) {
            if (x.second != 0) return false;
        }

        return true;
    }
};
