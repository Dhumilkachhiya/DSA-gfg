class Solution {
	public:
	bool check(long long energy, vector<int>& arr, int high) {
		
		for (int h : arr) {
			energy = 2*energy - h;
			
			if (energy < 0)
				return false;
			if (energy >= high)
				return true;
			
		}
		return true;
	}
	
	int find(vector<int>& arr) {
		int mx = *max_element(arr.begin(), arr.end());
		
		int low = 0;
		int high = mx;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			if (check(mid, arr, mx))
				high = mid - 1;
			else
				low = mid + 1;
		}
		
		return low;
	}
};
