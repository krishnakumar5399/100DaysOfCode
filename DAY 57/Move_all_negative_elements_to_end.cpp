#include<bits/stdc++.h>
using namespace std;
   void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>p;
        vector<int>ne;
        for(int i = 0 ;i<n;i++){
            if(arr[i] >= 0)
            p.push_back(arr[i]) ;
            else
            ne.push_back(arr[i]) ;
        }
        for(int i= 0 ;i<p.size() ;i++){
            arr[i] = p[i] ;
        }
        int s = p.size() ;
        for(int i= 0 ;i<ne.size();i++){
            arr[s++] = ne[i] ;
        }
    }
int main() 
{
     
     
  return 0;
}