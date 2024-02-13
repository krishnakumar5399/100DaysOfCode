/*205. Isomorphic Strings

Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false
Example 3:

Input: s = "paper", t = "title"
Output: true*/
 





#include<bits/stdc++.h>
using namespace std;
void createUpdateMapping(string &s ){
        // create mapping.
        char start = 'a' ;
        char mapping[256] = {0} ;
        for(auto ch : s){
            if(mapping[ch] == 0){
                mapping[ch] = start;
                start ++;
            }
        }

        // update mapping 
        for(int i=0 ;i<s.length();i++){
            char ch = s[i] ;
            s[i] = mapping[ch] ;
        }
    }
    bool isIsomorphic(string s, string t) {
        createUpdateMapping(s) ;
        createUpdateMapping(t) ;
        if(s.compare(t) == 0) return true;
        return false ;
        
    }
int main() 
{
    string s = "egg" ;
    string  t = "add" ;
    if(isIsomorphic(s,t)){
        cout<<"isomorphic "<<endl ;
    } 
    else{
        cout<<"not isophoric "<<endl;
    }
     
  return 0;
}