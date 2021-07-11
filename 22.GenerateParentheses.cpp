// finished 12 ms
class Solution {
public:
    bool isValid(string s) {
	
			stack<char>stack;
	for(int i=0;i<s.size();i++){

		if(s.at(i)=='(' or s.at(i)=='[' or s.at(i)=='{' ){
			stack.push(s.at(i));
		}else if(stack.size()==0){
			return false;
		}
		else if(s.at(i)==')' and stack.top()=='(' and !stack.empty()){
				stack.pop();
		}else if(s.at(i)==']' and stack.top()=='['  and !stack.empty()){
				stack.pop();
		}else if(s.at(i)=='}' and stack.top()=='{' and  !stack.empty()){
				stack.pop();
		}else{
			return false;
		}

	}
	if(stack.size()!=0){
		return false;
	}
	return true;

    }
    vector<string> generateParenthesis(int n) {
        
        
        string nums="";
        for(int i=0;i<n;i++){
            nums+="()";
        }

	vector<string>  result;
	sort(nums.begin(),nums.end());
	do{
		if(nums.at(0)=='(' and isValid(nums))
			result.push_back(nums);

	}while(std::next_permutation(nums.begin(),nums.end()));
    
        return result;
        
    }
};
//finished 4 ms

class Solution {
public:
    bool isValid(string s) {

		int c =0;
		int a =0;
		for(int i=0;i<s.size();i++){
			if(s.at(i)=='(')
				a++;
			else
				c++;
			if(c>a)
				return false;
		}
	return true;
    }
    vector<string> generateParenthesis(int n) {
        
        
        string nums="";
        for(int i=0;i<n;i++){
            nums+="()";
        }

	vector<string>  result;
	sort(nums.begin(),nums.end());
	do{
		if(nums.at(0)=='(' and nums.at(nums.size()-1)==')' and isValid(nums))
			result.push_back(nums);

	}while(std::next_permutation(nums.begin(),nums.end()));
    
        return result;
        
    }
};