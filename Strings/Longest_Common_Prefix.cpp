class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int min = 10000;
        int n = strs.size();
        if(n == 0)
            return res;
        if(n == 1)
            return strs[0];
        for(int i = 0; i < n; i ++){
            int size = strs[i].size();
            if(size < min)
                min = size;
            
        }
        for(int i = 0 ; i < min ; i ++){
            char ch = strs[0][i];
            for(int j = 1; j < n; j ++){
                if(ch != strs[j][i])
                    return res;
            }
            res += ch;
        }
        return res;
        
        
    }
};
