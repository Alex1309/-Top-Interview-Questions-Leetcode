class Solution {
public:
bool backtracking(int index,string word,int i , int j,vector<vector<char> >& board){

	int m = board.size();
	int n = board[0].size();

	if(i<0 or j<0 or i>=m or j>=n or board[i][j]!=word.at(index) or board[i][j]=='.')
		return false;
	if(index==word.length()-1){
		return true;
	}


	char t = board[i][j];
	board[i][j] ='.';

	bool answer = (backtracking(index+1,word,i+1,j,board) or backtracking(index+1,word,i-1,j,board) or backtracking(index+1,word,i,j+1,board) or backtracking(index+1,word,i,j-1,board));
	board[i][j] = t;

	return answer;
}
bool exist(vector<vector<char> >& board, string word) {

	for(int i = 0; i<board.size(); i++){
		for(int j=0;j<board[0].size();j++){
			if(board[i][j]==word.at(0) and backtracking(0,word,i,j,board)){
				return true;
			}
		}
	}
	return false;

}
};