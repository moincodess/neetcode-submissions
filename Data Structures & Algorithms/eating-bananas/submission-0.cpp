class Solution {
public:
    int totalHours(vector<int>& arr, int k){
   long long total = 0;
    
        for(int i =0 ; i<arr.size();i++){
     total += (1LL * arr[i] + k - 1) / k;
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int st =1;
        int end = *max_element(piles.begin(), piles.end());
        int ans = -1;        
        while(st<=end){
            int mid = st+(end-st)/2;
      long long hours = totalHours(piles, mid);
        if(hours<=h){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }

        }
        return ans;
    }
};
