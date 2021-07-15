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

// other solution 0 ms
class Solution {
public:
    void sortColors(vector<int>& nums) {
    map<int,int> n;

        if(nums.size()>1){
            for(int i=0;i<nums.size();i++){
				n[nums[i]]++;
            }
            n[1]+=n[0];
            n[2]+=n[1];

	for(int i=0;i<nums.size();i++){
		if(i<n[0]){
            nums[i]=0;}
		else if(i<n[1]){
			nums[i]=1;
		}else if(i<n[2])
			nums[i]=2;}
        }
    }
};