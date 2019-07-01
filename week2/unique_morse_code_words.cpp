class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char,string> code ({{'a',".-"},{'b', "-..."},{'c',"-.-."},{'d', "-.."},{'e', "."},{'f', "..-."},{'g', "--."},{'h',"...."},{'i', ".."},{'j', ".---"},{'k', "-.-"},{'l',".-.."},{'m', "--"},{'n',"-."},{'o', "---"},{'p',".--."},{'q', "--.-"},{'r',".-."},{'s', "..."},{'t', "-"},{'u', "..-"},{'v',"...-"},{'w',".--"},{'x',"-..-"},{'y',"-.--"},{'z',"--.."}});
        
        unordered_set<string> ans;
        
        for(int i = 0; i < words.size(); i++){
            string word;
            for(int j = 0; j < words[i].size(); j++){
                word = word + code.at(words[i][j]);
                
            }
            ans.insert(word);
        }
        return ans.size();
        
    }
};
