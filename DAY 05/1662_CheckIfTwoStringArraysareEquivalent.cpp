class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans;
        string s ;
        for(int i=0;i<word1.size();i++){
            ans += word1[i];
        }
        for(int i=0;i<word2.size();i++){
            s += word2[i];
        }
        if(ans.compare(s)==0) return true ;
        else{
            return false ;
        }
        
    }
};
