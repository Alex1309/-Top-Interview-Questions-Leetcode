class Solution {
public:
    int strStr(string haystack, string needle) {

    if(needle.length()==0)
        return 0;
	if(haystack.length()==0)
        return -1;
	int j=0;
    int v=0;
    int i =0;
    int p=0;

	while(true){
	    if(needle.at(j)==haystack.at(i)){
	        j++;
	        v=i;
	        p++;
	    }else if(j>0){
	    	j=0;
	    	if(i>=p)
	    		i-=p;
	    	p=0;
    }
	    if(j==needle.length()){
	        break;
	    }
	    i++;
	    if(i==haystack.length())
	    	break;
	}

	if(j==needle.length()){
	    return (v - (needle.length()-1));
	}
	else{
	    return -1;
	}
    }
};