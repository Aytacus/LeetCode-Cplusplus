class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            string temp = "";
            for (int j = 0; j < min(prefix.size(), strs[i].size()); j++) {
                if (prefix[j] == strs[i][j]) {
                    temp += strs[i][j];
                } else {
                    break;
                }
            }
            prefix = temp; 
            if (prefix.empty())
                return ""; 
        }

        return prefix;
    }
};