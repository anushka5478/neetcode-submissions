class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxWater = 0;
       int lp = 0;
       int rp = height.size() - 1;
       while(lp < rp){
        int wid = rp - lp;
        int lam = min (height[rp], height[lp]);
        int currWater = wid*lam;
        maxWater = max(currWater,maxWater);
        height[lp] < height[rp] ? lp++ : rp--;
       }
       return maxWater;
    }
};