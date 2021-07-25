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

//other finished 20 ms
class Solution {
public:

bool isValidSudoku(vector<vector<char> >& board){

	bool r=true;

	for(int i=0;i<9;i++){
		map<char,int>numbersX;
		map<char,int>numbersY;
		for(int j=0;j<9;j++){

			if(board[i][j]!='.'){

				if(i%3==0 and j%3==0){
					if(board[i+1][j+1]==board[i][j] or board[i+2][j+1]==board[i][j] or board[i+1][j+2]==board[i][j] or board[i+2][j+2]==board[i][j]){
						r=false;
					}
				}
				else if(i%3==0  and j%3==1){
					if(board[i+1][j-1]==board[i][j] or board[i+2][j-1]==board[i][j] or board[i+1][j+1]==board[i][j] or board[i+2][j+1]==board[i][j]){
						r=false;
					}
				}else if(i%3==0  and j%3==2){
					if(board[i+1][j-2]==board[i][j] or board[i+1][j-1]==board[i][j] or board[i+2][j-2]==board[i][j] or board[i+2][j-1]==board[i][j]){
						r=false;
					}
				}
				else if(i%3==1 and j%3==0){
					if(board[i+1][j+1]==board[i][j] or board[i+1][j+2]==board[i][j] or board[i-1][j+1]==board[i][j] or board[i-1][j+2]==board[i][j]){

						r=false;
					}
				}
				else if(i%3==1 and j%3==1){
					if(board[i-1][j-1]==board[i][j] or board[i+1][j-1]==board[i][j] or board[i-1][j+1]==board[i][j] or board[i+1][j+1]==board[i][j]){
						r=false;
					}
				}else if(i%3==1 and j%3==2){
					if(board[i-1][j-2]==board[i][j] or board[i-1][j-1]==board[i][j] or board[i+1][j-2]==board[i][j] or board[i+1][j-1]==board[i][j]){
						r=false;
					}
				}else if(i%3==2 and  j%3==0){
					if(board[i-2][j+1]==board[i][j] or board[i-2][j+2]==board[i][j] or board[i-1][j+1]==board[i][j] or board[i-1][j+2]==board[i][j]){
						r=false;
					}
				}else if(i%3==2 and  j%3==1){
					if(board[i-2][j-1]==board[i][j] or board[i-1][j-1]==board[i][j] or board[i-2][j+1]==board[i][j] or board[i-1][j+1]==board[i][j]){
						r=false;
					}
				}else if(i%3==2 and  j%3==2){
					if(board[i-2][j-2]==board[i][j] or board[i-2][j-1]==board[i][j] or board[i-1][j-2]==board[i][j] or board[i-1][j-1]==board[i][j]){
						r=false;
					}
				}
				for(int k=0;k<9;k++){

					if((board[i][k]==board[i][j] and j!=k) or (board[k][j]==board[i][j] and k!=i)){
						r=false;
					}

				}

			}
		}

	}
	return r;
}
};