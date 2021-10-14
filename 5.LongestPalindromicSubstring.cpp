
//Time Limited Exceeded
class Solution {
public:
bool Palindrome(string s) {
	string d=s;
	reverse(s.begin(),s.end());
	if(s==d){
		return 1;
	}
	return 0;
}
string longestPalindrome(string s) {

	int maxi = s.size();
	int i=0;

	while(maxi>=1){
		string current = s.substr(i,maxi);
		if(Palindrome(current)){
			return current;
		}
		//	cout<<s.substr(i,maxi)<<"   "<<i<<" : "<<maxi<<endl;
		i++;
		if(i+maxi>s.size()){
			maxi-=1;
			i=0;
		}
	}
	return "";
}
};
//Runtime 58 ms
class Solution {
public:
string longestPalindrome(string s) {
	int maxi=0;
	int start=0,end=0;
	string answer="";
	for(int i=0;i<s.length();i++){
		start =i,end=i;
		while(start>=0 and end<s.length() and s.at(start)==s.at(end)){
			if(end-start+1>maxi){
				maxi=end-start+1;
				answer= s.substr(start,maxi);
			}
			start--;
			end++;
		}
		start =i;
		end = i+1;
		while(start>=0 and end<s.length() and s.at(start)==s.at(end)){
			if(end-start+1>maxi){
				maxi=end-start+1;
				answer= s.substr(start,maxi);
			}
			start--;
			end++;
		}
	}
	return answer;
}
};