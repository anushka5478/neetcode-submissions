class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        int n = s.size();
        int m  = t.size();

        if(n != m) return false;
        
        for(char c : s){
            mp[c]++;
        }

        for(char c : t){
            mp[c]--;
        }

        for(auto it : mp){
            if(it.second < 0)
            return false;
        }
        return true;
    }
};
