#include<bits/stdc++.h>
using namespace std;
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans ;
        for(int i = 0 ; i < words.size();i++){
            string s = words[i] ;
            if(s.find(x) != string :: npos){
                ans.push_back(i) ;
            }
        }
        return ans; 
    }
int main() 
{
    vector<string> words = {"leet","code"} ;
    char x = 'e' ;
    vector<int>ans ;
    ans = findWordsContaining(words,x) ;
    for(int i = 0 ;i<ans.size();i++){
        cout<<ans[i]<<" " ;
    }
     
     
  return 0;
}