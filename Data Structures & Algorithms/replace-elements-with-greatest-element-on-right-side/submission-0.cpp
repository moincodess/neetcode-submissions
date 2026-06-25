class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            int maxRight = -1;

            for (int j = i + 1; j < arr.size(); j++) {
               maxRight = max(arr[j], maxRight);

            }
             arr[i] = maxRight;

        }
        return arr;
    }
};