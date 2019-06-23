class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(floor(log2(n)) == ceil(log2(n)) && n != 0){
            return true;
        }
        else{
            return false;
        }
    }
};
