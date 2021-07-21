class Solution {
public:
    
vector<string>  uni(vector<string>& a ,vector<string>& b){
	vector<string>todos;
	if(a.size()==0)
		return b;
	for(int i=0;i<a.size();i++){
		string s=a.at(i);
		for(int j=0;j<b.size();j++){
            s+=b[j];
            todos.push_back(s);
            s=a.at(i);
		}
	}
	return todos;
}

vector<string> letterCombinations(string digits) {
    map <string, vector<string> > dict;
        dict["2"] = { "a", "b", "c" };
        dict["3"] = { "d", "e", "f" };
        dict["4"] = { "g", "h", "i" };
        dict["5"] = { "j", "k", "l" };
        dict["6"] = { "m", "n", "o" };
        dict["7"] = { "p", "q", "r","s" };
        dict["8"] = { "t", "u", "v" };
        dict["9"] = { "w", "x", "y","z" };

    int r = digits.size();
    vector<string> be;

	for(int i=0;i<r;i++){
		string auxh ="";
		auxh=digits[i];
		vector<string> aux = dict[auxh];
		be = uni(be,aux);
	}
    return be;
    }
};