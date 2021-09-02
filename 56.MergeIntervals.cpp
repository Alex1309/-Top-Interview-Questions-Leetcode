class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      vector<vector<int> > merged;
	int a=0;
	int b=0;

if(intervals.size()==1)
    return intervals;
	sort(intervals.begin(), intervals.end(), [](const vector<int> & a, const vector<int> & b){ return a[0] < b[0]; });
	a=intervals[0][0];
	b=intervals[0][1];

	for(int i=1;i<intervals.size();i++){

		if(b>=intervals[i][0]){
			a= min(a,intervals[i][0]);
			b= max(b,intervals[i][1]);
			if(i==intervals.size()-1){
				vector<int> m;
				m.push_back(a);
				m.push_back(b);
				merged.push_back(m);
                a=intervals[i][0];
			b=intervals[i][1];
			}
		}else{
			vector<int> m;
			m.push_back(a);
			m.push_back(b);
			merged.push_back(m);
			m.clear();
			a=intervals[i][0];
			b=intervals[i][1];
            	if(i==intervals.size()-1){
				m.push_back(a);
				m.push_back(b);
				merged.push_back(m);
				m.clear();
			}

		}
	}
	return merged;  
    }
}