class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> indices;

        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            int y = target - x;

            if(mp.find(y) != mp.end()){
                indices.push_back(mp[y]);
                indices.push_back(i);
                return indices;
            }

            mp[x] = i;
        }

        return indices;
    }
};