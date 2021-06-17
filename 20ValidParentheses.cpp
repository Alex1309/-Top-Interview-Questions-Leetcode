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
		stack<int>stack;
        bool valid = true;
		int c=0;

	for(int i=0;i<s.length();i++){
		if(i==0 and (s.at(i)=='(' or s.at(i)=='[' or s.at(i)=='{'))
			c=1;
		
		if(s.at(i)=='(' and c==1)
			stack.push(s.at(i));
		else if(s.at(i)=='[' and c==1)
			stack.push(s.at(i));
		else if(s.at(i)=='{' and c==1)
			stack.push(s.at(i));	
		else if(s.at(i)==')' and stack.top()=='(' and !stack.empty())
			stack.pop();
		else if(s.at(i)==']' and stack.top()=='['  and !stack.empty())
			stack.pop();
		else if(s.at(i)=='}' and stack.top()=='{' and  !stack.empty())
			stack.pop();
	}
		if(stack.empty() and c==1){
			valid =true;
		}else{
			valid =false;
		}
			return valid;
		}
};