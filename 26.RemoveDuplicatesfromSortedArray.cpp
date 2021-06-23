class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;

        for(int i=0;i<nums.size();i++){

            if(nums[i]!=nums[i+1]){
                nums[j]=nums[i];
                j++;
            }if(i+1==nums.size()-1){
                if(j==0)
                    nums[j]=nums[i+1];
            else if(nums[i+1]!=nums[i] or nums[j-1]!=nums[i+1])
                    nums[j]=nums[i+1];
                break;
            }
        }
    return j+1;   
    }
};