class Solution {
public:
    int romanToInt(string s) {

        map<char, int> roman;
        roman['M']=1000;
        roman['D']=500;
        roman['C']=100;
        roman['L']=50;
        roman['X']=10;
        roman['V']=5;
        roman['I']=1;
        int sum=0;
        int i=0;
        int last =1;
        while(i<s.size()){

            if(i==s.size()-1){
                sum+=roman[s.at(i)];
                last =0;
            }
            else if(last==1 and roman[s.at(i)]>=roman[s.at(i+1)])
                sum+=roman[s.at(i)];
            else{
                sum+=(roman[s.at(i+1)]-roman[s.at(i)]);
                i+=1;
            }
            i++;
        }     
    return sum; 
    }
};