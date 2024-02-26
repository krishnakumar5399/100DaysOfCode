/*Row with max 1s
MediumAccuracy: 33.09%Submissions: 235K+Points: 4
Internship Alert!
Become an SDE Intern by topping this monthly leaderboard! 

banner
Given a boolean 2D array of n x m dimensions, consisting of only 1's and 0's, where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:

Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).

Example 2:

Input: 
N = 2, M = 2
Arr[][] = {{0, 0}, {1, 1}}
Output: 1
Explanation: Row 1 contains 2 1's (0-based
indexing).*/

#include<bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
	    int ans = 0;
	    int row = -1 ;
	    for(int i = 0;i<n;i++){
	        int zero = 0 ;
	        int one = 0 ;
	        for(int j = 0;j<m;j++){
	            if(arr[i][j] == 0){
	                zero++;
	            }
	            else{
	                one = m-zero ;
	                if(one>ans){
	                    ans = one ;
	                    row = i ;
	                    break;
	                }
	                
	            }
	        }
	    }
	    return row;
	}

int main() 
{
    int N = 4 , M = 4 ;
    vector<vector<int>>Arr(N,vector<int>(M));
    Arr = {{0, 1, 1, 1},
            {0, 0, 1, 1},
            {1, 1, 1, 1},
            {0, 0, 0, 0}
        } ;
        cout<<rowWithMax1s(Arr,N,M) ;  // 2
     
     
  return 0;
}