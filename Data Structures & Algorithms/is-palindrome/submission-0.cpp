class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";

        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {
                s2.push_back(tolower(s[i]));
            }
        }

        int l = 0;
        int r = s2.size() - 1;

        while(l < r) {
            if(s2[l] == s2[r]) {
                l++;
                r--;
            }
            else {
                return false;
            }
        }

        return true;
    }
};