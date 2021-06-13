class Solution {
public:
    bool isPalindrome(int x) {
    
    bool is = true;
    int cont = 0;

    if(x<0)
        is = false;
    else if(x>=0 and x<=9){
        is = true;
    }else{
        int copyX = x;
        int inverted=0;
        while(x>=10){
            x/=10;
            cont++;
        }
        cont+=1;
        int half =(cont-1)/2;
        if(cont%2==0){
            half=half+1;
        }
        int halfCont=0;
        while(halfCont!=half){
            int last =copyX%10;
            inverted = inverted * 10 + last;
            copyX/=10;
            halfCont++;
            if(halfCont==half and cont%2!=0){
                copyX/=10;
            }
        }
        if(copyX!=inverted){
            is=false;
        }
    }
    return is;
    }
};