class Solution {
public:
vector<vector<int> > threeSum(vector<int>& nums) {

	vector<vector<int> > sol;

	if(nums.size()<3)
		return sol;

	sort(nums.begin(),nums.end());

	for(int i=0;i<nums.size();i++){


		if(i>0 and nums[i]==nums[i-1])
			continue;

		int l = i+1;
		int r = nums.size() - 1;

		while (l < r) {

			if (nums[l] + nums[r] + nums[i] == 0){
				
                    sol.push_back(vector<int>({nums[l], nums[r], nums[i]}));

				while (l < r && nums[l] == nums[l+1]) {
					++l;
				}

				l++;
			}
			else if (nums[l] + nums[r] + nums[i] < 0)
				l++;
			else
				r--;
		}
	}

	return sol;
}


};