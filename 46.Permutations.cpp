
//First option. 4 ms
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        do{
            result.push_back(nums);
            
        }while(std::next_permutation(nums.begin(),nums.end()));
        
        return result;
    }
};

//Other opcion
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        permutation(nums,0,result);
        return result;
       
    }
    void permutation(vector<int>&nums,int a, vector<vector<int>>& result){
        int k=a;

        if(k==nums.size()-1){
            result.push_back(nums);
        }
        for(int i=k;i<nums.size();i++){
            swap(nums[i],nums[k]);
            permutation(nums,k+1,result);
            swap(nums[i],nums[k]);

        }
        
    }
};