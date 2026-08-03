class Solution {
	public:
	int maxSumWithK(vector<int>& arr, int k) {
		int n = arr.size();
		vector<int>maxsumuptoi(n);
		maxsumuptoi[0] = arr[0];
		for (int i = 1; i<n; i++) {
			maxsumuptoi[i] = max(arr[i],maxsumuptoi[i - 1]+arr[i]);
		}
		int csum = 0;
		for (int i = 0; i<k; i++) {
			csum += arr[i];
		}
		int ans = csum;
		for (int i = k; i<n; i++) {
			csum = csum - arr[i - k]+arr[i];
			ans = max(csum, ans);
			ans = max(ans, csum + maxsumuptoi[i - k]);
		}
		return ans;
	}
};
