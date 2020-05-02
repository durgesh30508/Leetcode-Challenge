class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        map<char,int> mp;
        
        for(char i:S)
            mp[i]++;
        
        int ans = 0;
        
        for(char i:J)
            ans+=mp[i];
        
        return ans;
    }
};
//Explanation

//store count of each character in string s
//return sum of count of all character in string s which already present in string j.
