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

//Finished 36 ms
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
	vector<vector<string> > sol;
	vector<string> temp;


	multimap <string, string> st;

	for(int i=0;i<strs.size();i++){
		string aux = strs[i];
		sort(aux.begin(), aux.end());
		st.insert(pair <string, string> (aux, strs[i]));

	}
	multimap <string, string> :: iterator itr;
	multimap <string, string> :: iterator itrO;

	vector<string> keys;
	for( auto it = st.begin(), end = st.end();
			it != end;
			it = st.upper_bound(it->first)
	)    keys.push_back(it->first);


	for(int i=0;i<keys.size();i++){

		typedef multimap<string,string> stAux;
		std::pair<stAux::iterator, stAux::iterator> range;

		range = st.equal_range(keys[i]);
		for (stAux::iterator it = range.first; it != range.second; ++it){
			temp.push_back(it->second);
		}
		sol.push_back(temp);
		temp.clear();
	}
	return sol;
    } 
};