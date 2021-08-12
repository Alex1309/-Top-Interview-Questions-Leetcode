//Time Limit Exceeded
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
	vector<int> sums;
	for(int i=0;i<nums.size();i++){
		int sum=0;

		for(int j=i;j<nums.size();j++){
			sum = sum+nums[j];
			sums.push_back(sum);
		}
	}
	sort(sums.begin(),sums.end());

	return sums[sums.size()-1];
}
};