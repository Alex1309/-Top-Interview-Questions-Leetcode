class Solution {
public:
    void sortColors(vector<int>& nums) {
    int zer=0;
	int one=0;
	int two=0;
	
        
        if(nums.size()>1){
            for(int i=0;i<nums.size();i++){
		if(nums[i]==0){
			zer++;
		}
		if(nums[i]==1){
			one++;
		}
		else {
			two++;
		}
	}
	//cout<<zer<<" "<<one<<" "<<two<<endl;

	one +=zer;
	two+=one;

	for(int i=0;i<nums.size();i++){
		if(i<zer){
			nums[i]=0;
		}
		else if(i<one){
			nums[i]=1;
		}else if(i<two)
			nums[i]=2;
	}
        
        }
	
	
	
        
    }
};