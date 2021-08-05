class Solution {
public:
    int mySqrt(int x) {
        	int total=50000;
	int c[total];
	int a[total];

	int count = 3;
	c[0]=1;
	a[0]=1;
	int t = x/2;

	if(t>total)
		t=total;
	int i=0;
	while(x>=c[i]){
		i++;
		c[i]=c[i-1]+count;
		count+=2;
		a[i]=i+1;
	}
	if(x==0)
		return 0;
	return a[i-1];
    }
};