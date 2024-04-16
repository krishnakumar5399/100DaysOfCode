#include<bits/stdc++.h>
using namespace std;
    int scoreOfString(string s) {
        int sum = 0 ;
        for(int i = 0 ;i<s.length()-1;i++){
            sum += abs(int(s[i]) - int(s[i+1])) ;
        }
        return sum ;
        
    }
int main() 
{
     
     
  return 0;
}