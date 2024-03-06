#include<bits/stdc++.h>
using namespace std;
void mapp(string &s){
        //crate mapping 
        char start = 'a' ;
        char mapping [256] ={0} ;
        
        for(auto i : s){
            if(mapping[i] == 0){
                mapping[i] = start;
                start++;
            }
        }
        
        // use mapping
        for(int i = 0; i<s.length() ;i++){
            char ch = s[i] ;
            s[i] = mapping[ch] ;
        }
        
        
    }
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        mapp(str1);
        mapp(str2) ;
        if(str1.compare(str2)==0){
            return true;
        }
        else
        return false;
   

        
    }
int main() 
{
    string s = "abc" ;
    string str = "xxy" ;
    cout<<areIsomorphic(s,str)<<endl;
     
     
  return 0;
}