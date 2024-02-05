// 680. Valid Palindrome II
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:

// Input: s = "abc"
// Output: false

// #include<bits/stdc++.h>
// using namespace std;
// // for checking palindrome validity.
// bool checkPalindrome(string s,int i,int j){
//     while(i<=j){
//            if(s[i] != s[j]){
//                return false;
//            }
//            else{
//                i++;
//                j--;
//            }
//     }
//     return true;
// }
// // check string is palindrome or not at most one character is delete .

//     bool validPalindrome(string s) {
//         int i = 0 ;
//         int j = s.length()-1;
//         while(i<=j){
//             if(s[i] == s[j]){
//                 i++;
//                 j--;
//             }
//             else{
//                 // equal nhi hai mtlb 1 romoval karna hoga
//                 //1. if ith remove
//                 bool ans1 = checkPalindrome(s,i+1,j);
                
//                 //2. if jth remove
//                 bool ans2 =checkPalindrome(s,i,j-1);

//                 // if anyone of ans1 and ans2 is true then return true.
//                 return ans1 || ans2 ;

//             }
//         }
//         return true;
        
//     }
// int main() 
// {
//     string s = "abccbda";
//     cout<<validPalindrome(s)<<endl;     // true ;
     
     
//   return 0;
// }








