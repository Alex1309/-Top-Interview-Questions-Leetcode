class Solution {
public:
    void subsetsIteration(vector<int>& nums,vector<int>& sub,vector<vector<int>>& res,int n){
        res.push_back(sub);
        for(int i=n;i<nums.size();i++){
            sub.push_back(nums[i]);
            subsetsIteration(nums,sub,res,i+1);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> sub;
        vector<vector<int>>res;        
        subsetsIteration(nums,sub,res,0);
        return res;
    }
};
