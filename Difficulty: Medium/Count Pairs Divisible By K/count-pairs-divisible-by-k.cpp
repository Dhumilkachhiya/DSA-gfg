class Solution {
	public:
	int countKdivPairs(vector<int>& arr, int k) {
		int count = 0;
		unordered_map<int,int>mp;
		for(int i=0;i<arr.size();i++){
		    int mod=arr[i]%k;
		    int req=(mod==0)?0:k-mod;
		    count+=(mp[req]);
		    mp[mod]++;
		    
		}
		return count;
	}
};
