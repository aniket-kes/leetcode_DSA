class Solution {
public:
    int reverse(int x) {
        int temp = 0, rem = 0;
        while(x!=0){
            rem = x % 10;
            x = x / 10;
            
            if( (temp>INT_MAX/10) || (temp<INT_MIN/10) ){
                return 0;
            }
            temp = ( temp * 10 ) + rem;

        }
        return temp;
    }
};
