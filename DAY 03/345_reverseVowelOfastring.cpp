// 345. Reverse Vowels of a String

// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

// Example 1:

// Input: s = "hello"
// Output: "holle"
// Example 2:

// Input: s = "leetcode"
// Output: "leotcede"


#include<bits/stdc++.h>
using namespace std;
bool checkVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch == 'o' || ch =='u'){
        return true;
    }
     else if(ch == 'A' || ch=='E' || ch=='I' || ch=='O' || ch =='U'){
        return true;
    }
    return false;
}
    string reverseVowels(string s) {
        int i = 0 ;
        int j = s.length()-1;
        while(i<j){
            if(checkVowel(s[i])==true && checkVowel(s[j])==true ){
                swap(s[i],s[j]);
            
                    i++;
                    j--;
                
               
            }
            if(checkVowel(s[i]) == false){
                i++;
            }
            if(checkVowel(s[j]) == false){
                j--;
            }
            
        }
        return s;
    
    }   
int main() 
{
    string s = "hello" ;
   
    cout<<"after the reverse vowel of the string : "<<reverseVowels(s)<<endl;       // holle ;
     
     
  return 0;
}