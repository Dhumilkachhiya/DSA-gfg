class Solution {
public:
    int findMax(int n, vector<int>& a, vector<int>& b, vector<int>& k) {
        vector<int> diff(n, 0);

        for (int i = 0; i < a.size(); i++) {
            diff[a[i]] += k[i];

            if (b[i] + 1 < n)
                diff[b[i] + 1] -= k[i];
        }

        int curr = 0, mx = INT_MIN;

        for (int i = 0; i < n; i++) {
            curr += diff[i];
            mx = max(mx, curr);
        }

        return mx;
    }
};