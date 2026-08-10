class Solution {
	public:
	int maxTask(vector<int>& h, vector<int>& l) {
		
		int n = h.size();
		vector<int> dp(n, 0);
		int prev1 = max(h[0], l[0]);
		int prev2 = 0;
		int ans = prev1;
		for (int i = 1; i < n; i++) {
			int high = h[i] + prev2;
			int low = l[i]+prev1;
			ans = max(high, low);
			prev2 = prev1;
			prev1 = ans;
		}
		return ans;
	}
};
