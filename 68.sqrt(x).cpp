class Solution {
public:
    int mySqrt(int x) {
    	int total=50000;
		int c[total];
		int a[total];
		int max = 2147483646;
		int count = 3;
		c[0]=1;
		a[0]=1;
		int t = x/2;

		if(t>total)
			t=total;
		int i=0;
		int v=0;
		while(x>=c[i]){
			if(c[i]>=max-count){
				v=1;
				break;
			}
			i++;
			c[i]=c[i-1]+count;
			count+=2;
			a[i]=i+1;
		}
	if(x==0)
		return 0;
	if(v==1)
		return a[i];
	return a[i-1];
    }
};
// Other solution 12 ms
class Solution {
public:
    int mySqrt(int x) {
    		int max = 2147483646;
	int v=0;
	if(x==0 or x==1)
		return x;

	int i=1;int r=1;
	while(r<=x){

		if(i>=46340){
			v=1;
			break;

		}
		i++;
		r = i*i;
	}
	if(v==1)
		return i;
	return i-1;
    }
};
//Other solcuion 0 ms
class Solution {
public:
    int mySqrt(int x) {
    	
        
	int l =0;
	int u=46340;
    int a =0;
	if(x==0 or x==1)
		return x;
	
	while(l<=u){
		long m = (l+u)/2;
        
		if(m*m==x)
			return m;

		if(m<=x/m){
			l = m+1;
            a = m;
		}else{
			u = m-1;
		}
    }
        return a;
    }
};
