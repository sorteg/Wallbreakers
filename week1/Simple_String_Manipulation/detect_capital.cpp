class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;
        int lower = 0;
        for(int i = 0; i < word.size(); i++){
            if(isupper(word[i])){
                upper++;
            }
            else{
                lower++;
            }
        }
        
        if(upper == word.size() || lower == word.size() || (isupper(word[0]) && lower == word.size() -1)){
            return true;
        }
        return false;
    }
};
