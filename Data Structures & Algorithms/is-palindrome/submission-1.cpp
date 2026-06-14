class Solution {
public:
    bool isPalindrome(string s) {
        string t=s;
        s="";
        for(auto ch : t){
            if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
                s.push_back(tolower(ch));    
            }
            else if(ch>='0' && ch<='9'){
                s.push_back(ch);
            }
        }

        int n=s.length();
        int i=0,j=n-1;
        // cout<<"S = "<<s<<endl;

        while(i<j){
            if(s[i]==s[j]){
                // cout<<s[i]<<" "<<s[j]<<endl;
                i++;
                j--;
            }
            else return false;
        }

        return true;
    }
};
