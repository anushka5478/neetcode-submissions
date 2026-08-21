class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> visited(256, false);

        int l = 0;
        int ans = 0;

        for(int r = 0; r < s.size(); r++) {

            while(visited[s[r]]) {
                visited[s[l]] = false;
                l++;
            }

            visited[s[r]] = true;
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};