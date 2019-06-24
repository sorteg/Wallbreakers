class Solution {
public:
    int titleToNumber(string s) {
        int exp = s.size()-1;
        int num = 0;
        int total = 0;
        int size = s.size();
        while(num < size){
            total = total + ((s[num] - 64) * pow(26,exp));
            num++;
            exp--;
        }
        return total;
    }
};
