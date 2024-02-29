/*59. Spiral Matrix II

Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

 

Example 1:


Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]
Example 2:

Input: n = 1
Output: [[1]]
*/

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>arr(n,vector<int>(n));
        int left = 0 ,right = n-1 ;
        int top = 0 , bottom = n-1 ;
        int direction = 0 ;
        int element = 1 ;
        while(top<=bottom && left <= right){
            // left to right.
            if(direction == 0){
                for( int i = left ;i<= right;i++){
                    arr[top][i] = element++;
                }
                direction = 1 ;
                top++;

            }
            else if (direction == 1){
                for(int i = top ;i<= bottom ;i++){
                    arr[i][right] = element++;
                }
                direction = 2;
                right--;

            }
            else if (direction == 2){
                for(int i = right ; i>= left;i--){
                    arr[bottom][i] = element++;
                }
                bottom--;
                direction = 3;

            }
            else if (direction == 3){
                for(int i = bottom ; i>=top ;i--){
                    arr[i][left] = element++;
                } 
                direction = 0;
                left++; 

            }

            
        }
        return arr;
    }   
int main() 
{
    int n = 3 ;
    vector<vector<int>>arr(n,vector<int>(n)) ;
    arr = generateMatrix(n) ;
    for(int i= 0 ;i<n;i++){
        for(int j = 0 ;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     
     
  return 0;
}