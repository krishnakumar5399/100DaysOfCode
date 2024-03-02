#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size() ;
        int m = matrix[0].size();
        vector<vector<int>>arr(m,vector<int>(n,0));
       
        for(int i = 0 ;i<n;i++){
            for(int j = 0 ;j<m;j++){
                arr[j][i] = matrix[i][j] ;
            }
        }
        return arr;
        
    }

int main() 
{
    vector<vector<int>>arr(3,vector<int>(3));
    arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    vector<vector<int>>ans ;
    ans = transpose(arr);
     
     
  return 0;
}