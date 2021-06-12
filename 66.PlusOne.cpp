class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> newDigits;
        
        int size = digits.size();
        size-=1;
        int copySize = size;
        int cont=0;
        int first=0;

        if(digits[size]<9){
            digits[size]+=1;
            first=1;
        }

        while(digits[size]==9 and first==0){
            cont++;
            digits[size]=0;
            if(size>0)
                size--;

        }

        if(cont>0){
		if(cont==(copySize+1)){
				newDigits.push_back(1);
				for(int i=0;i<cont;i++){
					newDigits.push_back(0);
				}
			}else{
				digits[copySize-cont]+=1;
				newDigits=digits;
			}
	}else{
		newDigits=digits;
	}

        return newDigits;
        
        
    }
};