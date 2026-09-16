class Solution {
	public:
	int dominantPairs(vector<int> &arr) {
		int n = arr.size();
		
		sort(arr.begin(), arr.begin() + n/2);
		sort(arr.begin() + n/2, arr.end());
		int i = 0;
		int j = n/2;
		int ans = 0;
		while (i<n/2 && j<n) {
			if (arr[j]*5 <= arr[i]) {
				ans += (n/2) - i;
				j++;
			} else {
				i++;
			}
			
		}
		return ans;
	}
};
