class Solution {
public:

    string encode(vector<string>& strs) {
        string str = "";

        for (string s : strs) {
            int len = s.length();
            str += to_string(len) + '#' + s;
        }

        return str;
    }   

    vector<string> decode(string s) {
        vector<string> ans;

        int i = 0, len = 0;
        while (i < s.length()) {
            while (s[i] != '#') {
                len *= 10;
                len += (s[i] - '0');
                i++;
            }

            i++;

            ans.push_back(s.substr(i, len));

            i += len;

            len = 0;
        }

        return ans;
    }
};
