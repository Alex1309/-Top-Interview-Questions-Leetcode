//Time Limited Exceeded
class Solution {
public:
    int maxArea(vector<int>& height) {
int mayor =0;
	for(int i=0;i<height.size()-1;i++){
		for(int j=i+1;j<height.size();j++){
			int area = min(height[i],height[j]);
			area*=(j-i);
            mayor = max(mayor,area);
		}
	}
	return mayor;
    }
};
//Runtime 76 ms
class Solution {
public:
    int maxArea(vector<int>& height) {
	int i=0;
	int j=height.size()-1;
	int mayor =0;

	while(i<j){
		int area = min(height[i],height[j]);
		area*=(j-i);
		mayor= max(area,mayor);

		if(height[i]<height[j]){
			i++;
		}else if(height[i]>=height[j]){
			j--;
		}else{
			break;
		}
	}
	return mayor;
    }
};