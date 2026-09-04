class Solution {
public:
    long long maxFruits(vector<int>& arr, int m) {
        int n = arr.size();

        if (m >= n) {
            long long total = 0;
            for (int x : arr)
                total += x;
            return total;
        }

        long long curr = 0;

        for (int i = 0; i < m; i++)
            curr += arr[i];

        long long ans = curr;

        for (int i = m; i < n+m-1; i++) {
            curr -= arr[(i - m) % n];
            curr += arr[i % n];

            ans = max(ans, curr);
        }

        return ans;
    }
};