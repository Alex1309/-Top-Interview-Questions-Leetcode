class Solution {
public:
    vector<int> spiralOrderHelper(vector<vector<int> >& matrix,int i,int m,int n) {

	vector<int>v;
		//der
		for(int y=i;y<=n-1;y++){
			if(matrix[i][y]!=101)
				v.push_back(matrix[i][y]);
			matrix[i][y]=101;
		}
		//down
		for(int x=i;x<=m-1;x++){
			if(matrix[x][n-1]!=101){
				v.push_back(matrix[x][n-1]);
			}
			matrix[x][n-1]=101;
		}
		//izq

		for(int y=(n-1);y>=i+1;y--){
			if(matrix[m-1][y]!=101)
				v.push_back(matrix[m-1][y]);
			matrix[m-1][y]=101;
		}
		//arriba

		for(int y=m-1;y>=i+1;y--){
			if(matrix[y][i]!=101)
				v.push_back(matrix[y][i]);
			matrix[y][i]=101;
		}
	

	return v;
}

vector<int> spiralOrder(vector<vector<int> >& matrix) {

	int i = matrix.size();
	int j = matrix[0].size();
	vector<int> sol;
	vector<int> order;

	int k=0;
	while(k<i and j>0 and i>0){

		sol=spiralOrderHelper(matrix,k,i,j);
		if(sol.size()!=0)
			order.insert(order.end(), sol.begin(), sol.end());
		j--;
		i--;
		k++;
	}

	return order;
}
};