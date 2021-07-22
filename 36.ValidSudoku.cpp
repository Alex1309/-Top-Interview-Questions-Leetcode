class Solution {
public:
    bool validColumns(	vector<vector<char> >& board){
	for(int i=0;i<board.size();i++){
		map<char,int>numbers;
		for(int j=0;j<board[i].size();j++){
			if(numbers[board[j][i]]==1)
				return 0;
			if(board[j][i]!='.' and numbers[board[j][i]]==0){
				numbers[board[j][i]]=1;
			}
		}numbers.clear();
	}
	return 1;
}

bool validRows(vector<vector<char> >& board){

	for(int i=0;i<board.size();i++){
		map<char,int>numbers;
		for(int j=0;j<board[i].size();j++){

			if(numbers[board[i][j]]==1)
				return 0;
			if(board[i][j]!='.' and numbers[board[i][j]]==0){
				numbers[board[i][j]]=1;
			}
		}numbers.clear();
	}
	return 1;
}
bool validNine(vector<vector<char> >& board){
	int tempi=0;
	int tempj=0;

	for(int k=0;k<board.size();k++){
		map<char,int>numbers;

		for(int i=tempi;i<3+tempi;i++){
			for(int j=tempj;j<3+tempj;j++){
				if(numbers[board[i][j]]==1)
					return 0;
				if(board[i][j]!='.' and numbers[board[i][j]]==0){
					numbers[board[i][j]]=1;
				}
			}
		}
		tempj+=3;
		if(k==2 or k==5 or k==8){
			tempi+=3;
			tempj=0;
		}

	}
	return 1;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        if(validColumns(board) and validNine(board) and validRows(board))
            return 1;
        return 0;   
    }
};