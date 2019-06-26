class Solution {
public:
    string reverseVowels(string s) {
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                count++;
            }
        }
        int back = s.size()-1;
        for(int i = 0; i < s.size() && count > 0; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                while(!(s[back] == 'a' || s[back] == 'e' || s[back] == 'i' || s[back] == 'o' || s[back] == 'u' || s[back] == 'A' || s[back] == 'E' || s[back] == 'I' || s[back] == 'O' || s[back] == 'U')){
                    
                    back = back-1;
                }
                swap(s[i],s[back]);
                back = back-1;
                count = count -2;
            }
            
        }
        return s;
    }
};
