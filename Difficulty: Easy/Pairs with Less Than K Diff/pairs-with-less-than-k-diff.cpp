class Solution {
public:
    int countPairs(vector<int>& arr, int k) {
        int n = arr.size();
        int ans = 0;

        sort(arr.begin(), arr.end());
        int j = 1;
        for (int i = 0; i < n - 1; i++) {
            
            while (j < n && arr[j] - arr[i] < k) {
                j++;
            }
            ans+=(j-i-1);
        }

        return ans;
    }
};