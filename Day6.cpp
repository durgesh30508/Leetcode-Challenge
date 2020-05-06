class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int ans;
        for(auto i : nums)mp[i]++;
        for(auto i: nums){
            if(mp[i]>(nums.size()/2)){
                ans = i;
                break;
            }
        }
        return ans;
    }
};
//Explanation
//Just count the occurence of evry element and return the element which occure more than n/2
