#include<bits/stdc++.h>
using namespace std;
vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int>ans ;
        for(int  i = 0 ;i<arr.size();i++){
            for(int j = 0 ; j<arr[0].size();j++){
                ans.push_back(arr[i][j]) ;
            }
        }
        sort(ans.begin(),ans.end()) ;
        return ans ;
    }
int main() 
{
     
     
  return 0;
}