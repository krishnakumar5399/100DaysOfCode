
/*890. Find and Replace Pattern

Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.

A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.

Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.

 

Example 1:

Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
Output: ["mee","aqq"]
Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
"ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.
Example 2:

Input: words = ["a","b","c"], pattern = "a"
Output: ["a","b","c"]
*/


#include<bits/stdc++.h>
using namespace std;
void createAndUpdateMapping(string &s){
    
    // creating mapping ;

    char start = 'a' ;
    char mapping[300] ={0} ;
   for(auto ch : s){             // ye sirf mapping create kar diya or mapping wale character aaaray me strng ka character
    if(mapping[ch]==0){          // ka ascii vaue ko index man ke 'a 'ko rakh diya.
        mapping[ch] = start ;
        start++;
    }
   }

   // use mapping
   // ye loop mapping  wale character array me dale gye particular element ko that is jo bhielemrnt mapping ke time dale gye the        
   // forex-'abcd' ko string me lakar rakh dega sequence me.

   for(int i=0;i<s.length();i++){
    char ch = s[i] ;
    s[i] = mapping[ch] ;     // jo mapping wale character me para hai usko string me uske hi karm  me rakh dega
   }


}

vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    // creating vector of string.
    vector<string>ans ;
    createAndUpdateMapping(pattern) ;

    for(int i=0;i<words.size();i++){
        string temp = words[i];
        createAndUpdateMapping(temp);
        if(temp == pattern){
            ans.push_back(words[i]) ;
        }
    }
    return ans;
        
}
int main() 
{
    vector<string>words = {"abc","deq","mee","aqq","dkd","ccc"} ;
    //string pattern = "abb" ;
    string pattern = "abc" ;                                     // "abc",deq ;
    vector<string>ans = findAndReplacePattern(words,pattern);
    for(auto ch : ans){
        cout<<ch<<endl;                     // Output: ["mee","aqq"]
    }
     
     
  return 0;
}