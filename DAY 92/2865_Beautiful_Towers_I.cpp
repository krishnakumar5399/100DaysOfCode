#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        long long ans = 0; 
        int n = maxHeights.size(); 
        
        
        for (int i = 0; i < n; ++i) {
            vector<int> H(n); 
            H[i] = maxHeights[i]; 
            
            
            for (int j = i - 1; j >= 0; --j) {
                H[j] = min(maxHeights[j], H[j + 1]); 
            }
            
            
            for (int j = i + 1; j < n; ++j) {
                H[j] = min(maxHeights[j], H[j - 1]); 
            }
            
  
            ans = max(ans, accumulate(H.begin(), H.end(), 0LL));
        }
        
        return ans; 
    }
};
int main() 
{
     
     
  return 0;
}