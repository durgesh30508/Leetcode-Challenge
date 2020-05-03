class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[27] = { 0 },brr[27] = { 0 };
        for(char i : ransomNote)
            arr[i-'a']++;
        for(char i : magazine)
            brr[i-'a']++;
        for(int i=0;i<26;i++)
            if(arr[i]>brr[i])
                return false;
        return true;
        
    }
};

//Explanation
//store count of every character of both string in seperate arrays
//if there are some item which are more in ransomenote than magazine then we are not able to make ransomenote from magazine
//hence return false
//else return true
