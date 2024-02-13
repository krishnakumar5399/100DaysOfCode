/* 2108. Find First Palindromic String in the Array
n array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

A string is palindromic if it reads the same forward and backward.

 

Example 1:

Input: words = ["abc","car","ada","racecar","cool"]
Output: "ada"
Explanation: The first string that is palindromic is "ada".
Note that "racecar" is also palindromic, but it is not the first.
Example 2:

Input: words = ["notapalindrome","racecar"]
Output: "racecar"
Explanation: The first and only string that is palindromic is "racecar".
Example 3:

Input: words = ["def","ghi"]
Output: ""
Explanation: There are no palindromic strings, so the empty string is returned.
*/




#include<bits/stdc++.h>
using namespace std;
    bool isPalindromic(string s){
        int i = 0;
        int j = s.length()-1 ;
        while(i<=j){
            if(s[i] != s[j]){
                return false ;
            }
            else{
                i++;
                j--;
            }
        }
        return true ;
    }
    string firstPalindrome(vector<string>& words) {
        
        for(auto s : words){
            if(isPalindromic(s)){
                return s;
            }
        }
        return "" ;
        
    }
int main() 
{
    vector<string> words = {"abc","car","ada","racecar","cool"} ; 
    cout<<"first palindromic string : "<< firstPalindrome(words)<<endl;      //ada
     
     
  return 0;
}