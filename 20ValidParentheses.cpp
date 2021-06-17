class Solution {
public:
    bool isValid(string s) {
        vector<char>stack;
        bool valid = true;
int charLast=0;
char now=' ';
int charNow=0;
        int d=0;
        stack.push_back('#');

for(int i=0;i<s.length();i++){

	if(s.at(i)=='(' or s.at(i)=='[' or s.at(i)=='{'){
		if(i==0)
			stack.pop_back();
		stack.push_back(s.at(i));

	}
	else if((s.at(i)==')' or s.at(i)==']' or s.at(i)=='}') and stack.size()>0){
		now = s.at(i);
		charNow=int(now);
		charLast = int(stack.at(stack.size()-1));

		if((charLast+2==charNow or charLast+1==charNow) and stack.size()>0){
			stack.pop_back();
		}else{
			valid =false;
			break;
		}
	}else if((s.at(i)==')' or s.at(i)==']' or s.at(i)=='}') and stack.size()==0){
		d=1;
		break;
	}

}
	if(stack.size()==0 and d==0){
		valid =true;
	}else{
		valid =false;
	}
        return valid;
    }
};
//other option
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

};