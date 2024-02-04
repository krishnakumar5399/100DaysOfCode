// 1047. Remove All Adjacent Duplicates In String

// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

// We repeatedly make duplicate removals on s until we no longer can.

// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.
// Example 1:

// Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".


#include<bits/stdc++.h>
using namespace std;
string removeAdjecent(string s){
    string temp ;
    int index = 0;
    while(index < s.length()){
        if( temp.length() > 0 && temp[temp.length()-1] == s[index]){
            // if temp ka rightmost character string s ke currrent character ke equal ho .
            temp.pop_back();
        }
        else{
            temp.push_back(s[index]);
        }

        index++;
    }
     return temp ;
}
int main() 
{
    string s = "abbaca" ;

    cout<<removeAdjecent(s);     
     
  return 0;
}