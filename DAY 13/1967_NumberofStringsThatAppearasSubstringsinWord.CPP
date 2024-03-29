/*
1967_NumberofStringsThatAppearasSubstringsinWord.CPP

Given an array of strings patterns and a string word, return the number of strings in patterns that exist as a substring in word.

A substring is a contiguous sequence of characters within a string.

 

Example 1:

Input: patterns = ["a","abc","bc","d"], word = "abc"
Output: 3
Explanation:
- "a" appears as a substring in "abc".
- "abc" appears as a substring in "abc".
- "bc" appears as a substring in "abc".
- "d" does not appear as a substring in "abc".
3 of the strings in patterns appear as a substring in word.
Example 2:

Input: patterns = ["a","b","c"], word = "aaaaabbbbb"
Output: 2
Explanation:
- "a" appears as a substring in "aaaaabbbbb".
- "b" appears as a substring in "aaaaabbbbb".
- "c" does not appear as a substring in "aaaaabbbbb".
2 of the strings in patterns appear as a substring in word.
Example 3:

Input: patterns = ["a","a","a"], word = "ab"
Output: 3
Explanation: Each of the patterns appears as a substring in word "ab".
*/

#include<bits/stdc++.h>
using namespace std;
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0 ;
        for(auto s : patterns){
            if(word.find(s) != string :: npos){
                count++;
            }
        }
        return count ;
    }
int main() 
{
    vector<string> patterns = {"a","abc","bc","d"} ;
    string word = "abc" ;
    cout<<numOfStrings(patterns,word)<<endl;  // 3
     
     
  return 0;
}