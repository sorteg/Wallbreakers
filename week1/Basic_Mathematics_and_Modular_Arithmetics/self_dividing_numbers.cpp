class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        string str;
        bool add = 1;
        for(int i = left; i <= right; i++){
            add = 1;
            str = to_string(i);
            for(int j = 0; j < str.size(); j++){
                
                if((str[j] == '0')|| ((i % (str[j] - '0')) != 0)){
                    add = 0;
                }
            }
            if(add == 1){
                
                ans.push_back(i);
            }
        }
        return ans;
    }
};
