class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n - 1;
        int maxA = 0;

        while (left < right) {
            int w = right - left;
            int area = w * min(heights[left], heights[right]);
            maxA = max(area, maxA);
            (heights[left] < heights[right]) ? left++ : right--;
        }
        return maxA;
    }
};
