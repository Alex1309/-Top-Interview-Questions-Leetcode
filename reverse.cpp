class Solution {
public:
    int reverse(int x) {
    int inverted = 0;
        while(x!=0){
            int last = x % 10;
            x /= 10;
        
            if (inverted > INT_MAX/10 or (inverted == INT_MAX/10 and last>7))
                return 0;
            if (inverted < INT_MIN/10 or (inverted == INT_MIN/10 and last< -8))
                return 0;
        
            inverted = inverted * 10 + last;     
        }
        return inverted;
        
    }
};