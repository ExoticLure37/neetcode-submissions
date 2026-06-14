class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        for(auto c:s)   mp[c]++;

        for(auto c:t){
            if(mp.find(c)!=mp.end()){
                if(mp[c]>0){
                    mp[c]--;
                    if(mp[c]==0)    mp.erase(c);    
                }
            }
            else{
                return false;
            }
        }

        for(auto c:mp){
            int p = c.second;
            if(p > 0) return false;
        }

        return true;
    }
};
