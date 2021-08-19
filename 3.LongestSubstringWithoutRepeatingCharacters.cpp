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