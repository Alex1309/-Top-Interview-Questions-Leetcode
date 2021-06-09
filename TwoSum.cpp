class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> mp;
    vector<int> answer;
        
        for(int i=0;i<nums.size();i++){
            
            int findNumber = target - nums[i];
            
            if ( mp.find(findNumber) == mp.end() ) {
              // not found
                mp.insert(pair<int,int>(nums[i],i));
                
            } else {
                answer.push_back(i);
                answer.push_back(mp[findNumber]);
            }  
        }
        return answer;
    
    };
};
