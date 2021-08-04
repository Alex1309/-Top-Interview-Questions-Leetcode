class Solution {
public:
    string countAux(string a){
        string b="";
	int con=0;
	int v=0;
	for(int i=0;i<a.length();i++){

		if(i==a.length()-1){
			if(v==1){
				con+=1;
				b +=(to_string(con)+a[i]);
			}
			else{
				b +=(to_string(1)+a[i]);
			}
		}
		else if(a[i]==a[i+1]){
			v=1;
			con++;
		}else{
			if(con==0)
				b +=(to_string(1)+a[i]);
			if(v==1){
				con+=1;
				b +=(to_string(con)+a[i]);
			}
			v=0;
			con=0;
		}
	}
	return b;
    }
    string countAndSay(int n) {
       
	string f[n+1];

	f[1] = "1";

	for (int i = 2; i <= n; i++)
	{
		f[i] = countAux(f[i-1]);
	}
	return f[n];
    }
};