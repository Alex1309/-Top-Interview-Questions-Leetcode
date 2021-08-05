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