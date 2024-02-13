/*917. Reverse Only Letters
Solved

Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.

 

Example 1:

Input: s = "ab-cd"
Output: "dc-ba"
Example 2:

Input: s = "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"
Example 3:

Input: s = "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
*/

#include<bits/stdc++.h>
using namespace std;
    bool checkCharacter(char ch){
        if((ch>='A' && ch<='Z') || (ch >='a' && ch<= 'z')){
            return true;    
        }
        return false;
    }
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.length()-1 ;
        while(i<=j){
            if(checkCharacter(s[i]) && checkCharacter(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(checkCharacter(s[i])==false ){
                i++;
            }
            else if (checkCharacter(s[j]) == 0){
                j--;
            }
        } 
        return s;
    }   
int main() 
{
    string s = "ab-cd" ;
    cout<<"reversed only latters  is : "<<reverseOnlyLetters(s)<<endl;
     
     
  return 0;
}