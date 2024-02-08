
/*647. Palindromic Substrings

Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

 
Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".*/

#include<bits/stdc++.h>
using namespace std;

    // for checking odd and even palindromic string .
    int expand(string s,int i,int j){
        int count = 0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count ;
    }
    int countSubstrings(string s) {
        int n = s.length() ;
        int totalCount = 0 ;

        for(int i = 0; i<n;i++){
            // for odd j= i+1
            int oddPalindrome = expand(s,i,i) ;
            int evenPalindrome = expand(s,i,i+1) ;
            totalCount = totalCount + oddPalindrome + evenPalindrome ; 
        }
        return totalCount ;
    }

int main() 
{
    string s = "abc" ;
    string str = "aaa" ;
    cout<<"number of palindromic string is : "<<countSubstrings(s)<<endl;     // 3
    cout<<"number of palindromic string is : "<<countSubstrings(str)<<endl;   //6

     
     
  return 0;
}