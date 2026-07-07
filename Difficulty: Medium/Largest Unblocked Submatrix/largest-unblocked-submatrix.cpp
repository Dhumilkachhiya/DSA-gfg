class Solution {
	public:
	int largestArea(int n, int m, vector<vector<int>> &arr) {
		arr.push_back({0, m + 1});
		arr.push_back({n + 1, 0});
		int rowdiff = 0;
		int coldiff = 0;
		sort(arr.begin(), arr.end());
		for (int i = 1; i<arr.size(); i++) {
			rowdiff = max(rowdiff, arr[i][0]-arr[i - 1][0]-1);
		}
		sort(arr.begin(), arr.end(), [](const vector<int>& a, const vector<int>& b) {
			return a[1] < b[1];
		});
		for (int i = 1; i<arr.size(); i++) {
			coldiff = max(coldiff, arr[i][1]-arr[i - 1][1]-1);
		}
		return coldiff*rowdiff;
	}
};
