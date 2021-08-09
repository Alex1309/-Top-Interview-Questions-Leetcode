class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); //row
	int n = matrix[0].size(); //col
	int r[m];
	int c[n];
	for(int i=0;i<m;i++)
		r[i]=0;
	for(int i=0;i<n;i++)
		c[i]=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){

			if(matrix[i][j]==0){
				r[i]=1;
				c[j]=1;
			}
		}
	}
		for(int i=0;i<m;i++){
		if(r[i]==1){
			for(int j=0;j<n;j++)
				matrix[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		if(c[i]==1)
			for(int j=0;j<m;j++)
				matrix[j][i]=0;
	}
        
    }
};

//Other solution 12 ms
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
   

	int m = matrix.size(); //row
	int n = matrix[0].size(); //col
    
     vector<vector<int>> mOne(m, std::vector<int>(n, 0));

	for(int i=0;i<m;i++){ //m 

		for(int j=0;j<n;j++){ // n

			if(matrix[i][j]==0 and mOne[i][j]==0){
				mOne[i][j]=1;
				for(int k=0;k<m;k++){
					if(matrix[k][j]!=0)
						mOne[k][j]=1;
					matrix[k][j]=0;
				}
				for(int k=0;k<n;k++){
					if(matrix[i][k]!=0)
						mOne[i][k]=1;
					matrix[i][k]=0;
				}
			}
		}
	}
	
        
    }
};