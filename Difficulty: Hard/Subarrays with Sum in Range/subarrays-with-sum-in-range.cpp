class Solution {
	public:
	int countatmost(vector<int>& nums,int k){
	    if(k<1) return 0; 
	    int sum=0;
	    int left=0;
	    int ans=0;
	  for(int i=0;i<nums.size();i++){
	      sum+=nums[i];
	      while(sum>k){
	          sum-=nums[left];
	          left++;
	      }
	      ans+=i-left+1;
	  }
	  return ans;
	}
	int countSubarray(vector<int>& nums, int l, int r) {
	return countatmost(nums,r)-countatmost(nums,l-1);
	}
};
