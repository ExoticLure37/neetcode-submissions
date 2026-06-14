class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // priority_queue<int,vector<int> ,greater<int> > pq;
        set<int> s;
        for(auto c:nums){
            s.insert(c);
        }    

        int len = 0;
        int curr = 0;
        int prev = INT_MIN;

        for(auto c:s){
            if(prev == INT_MIN){
                prev = c;
                curr=1;
                len = max(len,curr);
            }
            else if(c == prev+1){
                prev = c;
                curr+=1;
                len = max(len,curr);
            }
            else{
                prev = c;
                curr = 1; 
            }
        }
        // for(auto c:s) pq.push(c);

        // int len=0;
        // int curr=0;
        // int prev=INT_MIN;
        // while(pq.size()){
        //     int val = pq.top();
        //     pq.pop();

        //     if(prev == (INT_MIN)){
        //         curr=1;
        //         prev=val;
        //         len = max(len,curr);
        //     }
        //     else if(prev==val-1){
        //         curr+=1;
        //         prev = val;
        //         len = max(len,curr);
        //     }
        //     else{
        //         curr=0;
        //         prev==INT_MIN;
        //     }
        // }

        return len;
    }
};
