class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> a;
        for(auto c:nums){
            if(a.find(c)!=a.end())  return true;
            a[c]=1;
        }
        return false;
    }
};