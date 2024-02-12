/*5. Longest Palindromic Substring

Given a string s, return the longest 
palindromic
 
substring
 in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
*/

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s ,int i,int j){
        while(i<=j){
            if(s[i] != s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true ;
    }
    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0;i<s.length();i++){
            for(int j = i ;j<s.length();j++){
                if(isPalindrome(s,i,j)){
                    string temp = s.substr(i,j-i+1) ;
                    if(ans.length()<temp.length()){
                        ans = temp ;
                    }
                }
            }
        }
        return ans ;
    }
int main() 
{
    string s = "babad" ;
    cout<<"longest palindromic substring is : "<<longestPalindrome(s)<<endl;     // "bab"
     
     
  return 0;
}
 