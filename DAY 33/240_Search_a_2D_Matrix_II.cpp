/*
240. Search a 2D Matrix II
Solved
Medium
Topics
Companies
Amazon
Microsoft
Bloomberg
Apple
Facebook
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
 

Example 1:


Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true
Example 2:
*/

#include<bits/stdc++.h>
using namespace std;
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size() ;
        int row = 0 ;
        int col = m-1 ;
        while(row<n && col >= 0){
            if(matrix[row][col] == target) return true ;
            // agr target se small hai to is row mw target present nahi hai.
            else if (matrix[row][col] < target){
                row++;
            }
            // agr target se grater hai to is column me nhi hai.
            else{
                col--;
            }
        }
        return false ;
        
    }
int main() 
{
    vector<vector<int>>arr(3,vector<int>(4)) ;
    arr ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int target = 14 ;
    cout<<searchMatrix(arr,target)<<endl;
     
     
  return 0;
}