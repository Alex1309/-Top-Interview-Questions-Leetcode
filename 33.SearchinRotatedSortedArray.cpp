class Solution {
public:
    int searchAux(vector<int>& nums, int target,int i,int j) {

	while(i<=j){

		int m=ceil((i+j)/2);
		if(nums[m]==target)
			return m;

		if(nums[m]<nums[i]){

			if(nums[m]<=target and target<=nums[j])
				i=m+1;
			else
				j=m-1;
		}else{
			if(nums[m]>=target and target>=nums[i])
				j= m-1;
			else{
				i = m+1;
			}
		}
	}
	return -1;
}
int search(vector<int>& nums, int target) {

	return searchAux(nums,target,0,nums.size()-1);
};
};