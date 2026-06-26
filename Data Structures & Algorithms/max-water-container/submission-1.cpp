class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n - 1;
        int maxA = 0;

        while (left < right) {
            int w = right - left;
            int ht = min(heights[left], heights[right]);
            int area = w * ht;

            maxA = max(area, maxA);

            if (heights[left] < heights[right])
                left++;

            else
                right--;
        }
        return maxA;
    }
};
