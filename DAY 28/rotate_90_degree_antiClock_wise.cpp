/*Rotate by 90 degree
EasyAccuracy: 56.88%Submissions: 74K+Points: 2
Internship Alert
New month-> Fresh Chance to top the leaderboard and get SDE Internship! 

banner
Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space. 

Example 1:

Input:
N = 3 
matrix[][] = {{1, 2, 3},
              {4, 5, 6}
              {7, 8, 9}}
Output: 
Rotated Matrix:
3 6 9
2 5 8
1 4 7
*/


#include<bits/stdc++.h>
using namespace std;
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // firstly reverse. for anti clock-wise
        for(int i = 0 ; i < n  ; i++){
            reverse(matrix[i].begin(),matrix[i].end()) ;
        }
        
        // tranpose of a matrix  kyuki anti clock wise rotate karna hai.
        for(int i = 0 ; i<n;i++){
            for(int j = i ; j <n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    } 
int main() 
{
    vector<vector<int>>arr(3,vector<int>(3));
    arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    rotateby90(arr,3);
    
    for(int i = 0 ;i < 3; i ++){
        for(int j = 0 ; j< 3 ; j ++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     
     
  return 0;
}