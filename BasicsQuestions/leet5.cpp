class Solution {
public:
    bool isPowerOfTwo(int n) { 
        int flag = 0; 
        for(int i=0; i < 31; i++){
            flag = pow(2,i);
            if(flag == n) return true;
        }
        
        return false;

    }
};
