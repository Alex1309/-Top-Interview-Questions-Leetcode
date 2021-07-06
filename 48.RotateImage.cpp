class Solution {
public:

void transpose(vector<vector<int> >& matrix){
	int n = matrix[0].size();
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(i!=j){
				swap(matrix[i][j],matrix[j][i]);
			}
		}
	}
}
    void inverse(vector<vector<int> >& matrix){
	int n = matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<(n/2);j++){
            swap(matrix[i][j],matrix[i][n-1-j]);
        }
    }
}

    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        inverse(matrix);
    }
};