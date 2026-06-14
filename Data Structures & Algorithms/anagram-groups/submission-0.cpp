class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string> > ans;

        unordered_map<string, vector<string> > mp;

        for(auto c: strs){
            string s = c;
            sort(s.begin(),s.end());
            mp[s].push_back(c);
        }

        for(auto c:mp){
            ans.push_back(c.second);
        }

        return ans;
    }
};
