class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int > mp;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int idx = i;
            int p = target - num;
            if(mp.find(p)!=mp.end()){
                // found
                return {mp[p],idx};
            }
            mp[num]=idx;
        }

        return {-1};
    }
};
