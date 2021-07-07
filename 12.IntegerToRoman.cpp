class Solution {
public:
    string intToRoman(int n) {
        string result="";
        map<int, string> roman;
        roman[1000]='M';
        roman[900] ="CM";
        roman[500]='D';
        roman[400]="CD";
        roman[100]='C';
        roman[90]="XC";
        roman[50]="L";
        roman[40]="XL";
        roman[10]='X';
        roman[9]="IX";
        roman[5]='V';
        roman[4]="IV";
        roman[1]="I";
        int x=0;
        while(n>=10 or (n<10 and x==0)){
		x=1;
		if(n/1000>=0 and n>=1000){
			int a = n/1000;
			for(int i=0;i<a;i++)
				result+=roman[1000];
			n=n%1000;
		}
		if(n/100>0 and n>=100){
			int a= n/100;
			string help="";
			if((n/100)*100>=100 and (n/100)*100<=399){
				for(int i=0;i<a;i++)
					help+="C";
				result+=help;
				n = n%100;
			}else if((n/100)*100>=600 and (n/100)*100<=899){
				a=a-5;
				help="D";
				for(int i=0;i<a;i++)
					help+="C";
				result+=help;
				n = n%100;

			}else{
				result+=roman[((n/100)*100)];
				n = n%100;
			}

		}if(n/10>0 and n>=10){
			int a= n/10;
			string help="";
			if((n/10)*10>=10 and (n/10)*10<=39){
				for(int i=0;i<a;i++)
					help+="X";
				result+=help;
				n = n%10;
			}else if((n/10)*10>=60 and (n/10)*10<=89){
				a=a-5;
				help="L";
				for(int i=0;i<a;i++)
					help+="X";
				result+=help;
				n = n%10;

			}else{
				result+=roman[((n/10)*10)];
				n = n%10;
			}

		}if(n>0 and n<10){
			int a= n;
			string help="";
			if(n>=1 and  n<=3){
				for(int i=0;i<a;i++)
					help+="I";
				result+=help;
			}else if(n>=6 and n<=8){
				a=a-5;
				help="V";
				for(int i=0;i<a;i++)
					help+="I";
				result+=help;
			}else{
				result+=roman[n];
			}

		}
	}
        return result;
    }
};

//other option 0 ms
class Solution {
public:
    string intToRoman(int n) {
        int num[] ={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string letters[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        string result ="";
        for(int i=12;i>=0;i--){
            int current =n/num[i];
            for(int j=0;j<current;j++){
                result+=letters[i];
            }
            n = n%num[i];
        }
        return result;
    }
};