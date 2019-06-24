class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size()-1;
        while(size != 0 && digits[size] == 9){
            digits[size] = 0;
            size = size -1;
        }
        
        if(size == 0 && digits[size] == 9){
            digits[size] = 0;
            digits.push_back(0);
        }
        digits[size] = digits[size] +1;
        return digits;
    }
};
