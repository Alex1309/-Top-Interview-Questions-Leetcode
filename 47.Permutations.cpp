class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        permutation(nums,0,result);
        return result;
       
    }
    void permutation(vector<int>&nums,int a, vector<vector<int>>& result){
        int k=a;
        map <int,bool> is;
        if(k==nums.size()-1){
            result.push_back(nums);
        }
        for(int i=k;i<nums.size();i++){
            if(is[nums[i]]==0){
                swap(nums[i],nums[k]);
                permutation(nums,k+1,result);
                swap(nums[i],nums[k]);
            }
            is[nums[i]]=1;
            

        }
        
    }
};
