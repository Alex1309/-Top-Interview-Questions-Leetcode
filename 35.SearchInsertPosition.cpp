class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();  
    int l=0;
    int r = n-1;
    int mid = 0;
    int t=0;
	
    if (r >= l)
        mid = l + (r - l) / 2;

    if (nums[mid] == target)
        return mid;

    if (nums[mid] >= target){
        for(int i=l;i<=mid;i++){
            if(nums[i]==target){
                mid =i;
                t=1;
                break;
            }if(nums[i]>target){
                mid =i;
                t=1;
                break;
            }
    }
	}else{
        for(int i=mid+1;i<=r;i++){
            if(nums[i]==target){
                mid =i;
                t=1;
                break;
        }   if(nums[i]>target){
                mid =i;
                t=1;
                break;
            }
        }
    } 
    if(t==1)
        return mid;
    if(nums[r]<target){
        return n;
	}else
        return 0;   
    }
};