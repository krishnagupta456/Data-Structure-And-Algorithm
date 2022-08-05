class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashset;
        for(auto num : nums){
            hashset.insert(num);
        }
        int final_strike = 0;
        for(auto num :nums){
            if(!hashset.count(num - 1)){
                int currentNum = num;
                int currentStrike = 1;
                
            
                while(hashset.count(currentNum + 1)){
                    currentNum += 1;
                    currentStrike += 1;
                }
                final_strike = max(final_strike, currentStrike);
            
        }
        }
        return final_strike;
    }
};
