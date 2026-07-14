class Solution {
	public:
	bool check(long long energy, vector<int>& arr) {
		const long long LIMIT = 1e18;
		
		for (int h : arr) {
			energy = 2LL * energy - h;
			
			if (energy < 0)
				return false;
			
			if (energy > LIMIT)
				energy = LIMIT; // prevent overflow
		}
		return true;
	}
	
	int find(vector<int>& arr) {
		int low = 0;
		int high = *max_element(arr.begin(), arr.end());
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			if (check(mid, arr))
				high = mid - 1;
			else
				low = mid + 1;
		}
		
		return low;
	}
};
