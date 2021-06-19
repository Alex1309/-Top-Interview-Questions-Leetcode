class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a ="";
        int size = 201;
     string help="";
     string shorter ="";
     int cont =0;
     for(int i=0;i<strs.size();i++){
         if(strs[i].length()<size){
             size=strs[i].length();
             shorter = strs[i];

         }
     }
     a=shorter;
     for(int i=0;i<strs.size();i++){

         for(int j=0;j<size;j++){
             if(strs[i].at(j)==shorter.at(j)){
                 help+=strs[i].at(j);

             }else{
                 break;
             }
         }
         if(help.length()>0){

             if(help.length()<=a.length()){
                  a=help;
             }
             help="";
             cont++;

         }else
             break;


     }
     if(cont==strs.size())
         return a;
     else
         return "";



    }
};
