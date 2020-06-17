class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
     int l=0,r=nums.size()-1;
    int ans;
     while(l<=r){
         int mid = (l+r)/2;
         if(mid==l and nums[mid]!=nums[mid+1]){
             ans = nums[mid];
             break;
         }
         if(mid==r and nums[mid]!=nums[mid-1]){
             ans = nums[mid];
             break;
         }
         if(mid>l and mid<r and (nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1])){
             ans = nums[mid];
             break;
         }
         if((mid-l)%2==0){
             if(mid+1<nums.size() and nums[mid+1]==nums[mid]){
                 l = mid+2;
             }
             else{
                 r = mid-2;
             }
         }
         else{
             if(mid+1<nums.size() and nums[mid+1]==nums[mid])
                 r=mid-1;
             else
                 l=mid+1;
         }
     }
     return ans;   
     }
    
    
};
