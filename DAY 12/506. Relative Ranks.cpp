class Solution {
public:
    int findIndex(vector<int> &score,int key){
        for(int i = 0 ;i<score.size();i++){
            if(score[i] == key) return i ;
        }
        return -1;
    }
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>ans;
        vector<string> s(score.size());
        ans = score ;
        sort(ans.begin(),ans.end()) ;
      
        int count = 1 ;

        for(int i = ans.size()-1;i>=0 ;i--){
            int index = findIndex(score,ans[i]);
            if(count == 1) {
                s[index] ="Gold Medal" ;
                count++;
            }
            else if(count == 2) {
                s[index] = "Silver Medal";
                count++;
            }
            else if(count == 3){
                s[index] = "Bronze Medal" ;
                count++;
            }
            else{
                s[index] =   to_string(count) ;
                count++ ;
            }
             
        }


        return s ;
        
    }
};
