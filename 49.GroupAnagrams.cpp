class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<int> arr;
	vector<vector<string> > sol;


	for(int i=0;i<strs.size();i++){
		arr.push_back(0);

	}

	int t=1;
	for(int i=0;i<strs.size();i++){
		string aux = strs[i];
		sort(aux.begin(), aux.end());
		if(arr[i]==0){
			for(int j=i+1;j<strs.size();j++){
				string auxOne = strs[j];
				sort(auxOne.begin(), auxOne.end());
				if(aux==auxOne){
					arr[j]=t;
				}
			}
			arr[i]=t;
			t++;

		}
	}
	vector<string> temp;

	for(int i=1;i<t;i++){
		for(int j=0;j<arr.size();j++){
			if(arr[j]==i){
				temp.push_back(strs[j]);
			}
		}
		sol.push_back(temp);
		temp.clear();

	}

	return sol;
    }
};