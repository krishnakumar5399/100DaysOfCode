/*709. To Lower Case

Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

 

Example 1:

Input: s = "Hello"
Output: "hello"
Example 2:

Input: s = "here"
Output: "here"
Example 3:

Input: s = "LOVELY"
Output: "lovely"
*/

#include<bits/stdc++.h>
using namespace std;
      char convert(char ch){
          if(ch>='A' && ch <= 'Z'){
              ch = ch -'A'+'a';
        }
        return ch ;

    }
 
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
           s[i] = convert(s[i]);
        }
        return s ;
        
    }
int main() 
{
    string s = "Hello" ;
    cout<<toLowerCase(s)<<endl;

     
     
  return 0;
}
 