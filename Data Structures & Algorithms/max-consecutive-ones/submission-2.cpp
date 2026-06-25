class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxCnt = 0;
        for (int i : nums) {
            if (i == 1) cnt++;

            if (i == 0)  cnt = 0;
            maxCnt = max(cnt, maxCnt);
        }
        return maxCnt;
    }
};