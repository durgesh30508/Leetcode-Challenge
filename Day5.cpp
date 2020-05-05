class Solution {
public:
    int firstUniqChar(string s) {

        map<char,int> mp;

        for(auto i : s)
            mp[i]++;

        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==1)
                return i;
        }

        return -1;
    }
};
//Explanation
//First count occurence of every character in string
//then return index of character whose count is one
//if no such index present return -1
