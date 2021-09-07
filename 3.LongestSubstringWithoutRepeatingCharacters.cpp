class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        		map <int,int> count;
	int size=s.length();
	if(size==1)
		return 1;
	int maxi =0;
	int maxAux=0;
	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			int x = s.at(j);
			if(count.find(x) == count.end()){
				maxAux++;
				count[x]=1;

			}else{
				cout<<maxAux;
				count.clear();
				maxi = max(maxi,maxAux);
				maxAux=0;
				break;
			}

		}
	}
	if(maxi==0)
		maxi=maxAux;
        return maxi;
    }
};
// solution 44 ms
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
	int left =0;
	int longest=0;
	map <int,int> count;
	for(int right=0;right<s.length() ; ){

		if(count.find(s.at(right)) == count.end()){
			count[s.at(right)]=0;
		}
		count[s.at(right)]+=1;
		map<string, int>::iterator it;

		for (auto const& [key, val] : count){
			if(val>1){
				count[s.at(left)]-=1;
				left+=1;
			}				
		}
		longest = max(longest,right-left+1);
		right++;
	}
	return longest;
	}
};