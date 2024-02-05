//  125. Valid Palindrome

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.


// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome



// code


 #include<bits/stdc++.h>
 using namespace std;
 char upperToLower(char ch){
       if(ch >= 'A' && ch <= 'Z'){
           //ch = ch-'A'+'a';
           ch = ch + 32;
       }
       return ch ;
   }
 bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                ans.push_back(s[i]);
            }
            if(s[i]>= 'A' && s[i]<='Z'){
                char ch = upperToLower(s[i]);
                ans.push_back(ch);
            }
            if(s[i] >='0' && s[i] <='9'){
                ans.push_back(s[i]);
            }
        }
        if(ans.empty()) return true;

        int start = 0;
        int end  = ans.length()-1;
        while(start<=end){
            if(ans[start]==ans[end]){
                start++;
                end--;
            }
            else{
                return false; 
            }
        }
        return true ;
        
    }
 int main() 
 {
    // string  s = "A man, a plan, a canal: Panama" ;
    // cout<<isPalindrome(s)<<endl;    // true 1

    string  s = "race a car" ;
    cout<<isPalindrome(s)<<endl;    // false 
      
      
   return 0;
 }