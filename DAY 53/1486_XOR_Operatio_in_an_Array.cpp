#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0 ;
       

        for(int i=0;i<n;i++){
            int x = start + 2*i ;
            ans = ans ^ x;
        }

        return ans ;
        
    }
};
int main() 
{
     
     
  return 0;
}