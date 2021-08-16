class Solution {
public:
  	vector<int> searchRangeHelper(vector<int>& nums, int target,int low,int high) {
		vector <int> index;

		while(low<=high){
			int mid = (low+high)/2;

			if(nums[mid]==target){
				int aux = mid;
				int min =-1;
				int max=-1;
				index.push_back(mid);


				while(mid-1>=0 and mid<=high and nums[mid-1]==target ){
					mid-=1;
					min =mid;
				}
				if(min!=-1)
					index.push_back(min);
				mid = aux;
				while(mid>=0 and mid+1<=high and nums[mid+1]==target ){
					mid+=1;
					max =mid;
				}
				if(max!=-1)
				index.push_back(max);
				break;
			}

			if(nums[mid]<target)
				low=mid+1;
			else
				high=mid -1;
		}
		return index;

	}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> f;
        vector<int> answer;
		int n = nums.size();
		f=searchRangeHelper(nums,target,0,n-1);
        if(f.size()>0){
            sort(f.begin(),f.end());
            answer.push_back(f[0]);
            answer.push_back(f[f.size()-1]);
        }else{
            answer.push_back(-1);
            answer.push_back(-1);
        }    
		return answer;      
    }
};