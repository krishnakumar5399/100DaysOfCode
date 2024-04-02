#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length()-1 ;
        while(i>=0){
            if(s[i] == ' '){
                i--;
            }
            else break ;
        }
       int  count = 0 ; 
        while(i>=0){
            if(s[i--] != ' '){
                count++;
            }
            else break ;
          
        }
        return count ;
    }
};
int main() 
{
     
     
  return 0;
}