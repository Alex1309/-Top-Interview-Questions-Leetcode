class Solution {
public:
    bool canJump(vector<int>& nums) {
	int indexGoal = nums.size()-1;

	if(nums.size()==1)
		return 1;
	int maxIndex=0;
	
	for(int i=0;i<nums.size()-1;i++){
		if(maxIndex<i+nums[i])
			maxIndex=i+nums[i];
		
		if(i>=maxIndex)
			return 0;
		
		if(i+nums[i]>=indexGoal)
			return 1;
	
	}
	return 0;
}
};