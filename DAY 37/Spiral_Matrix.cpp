

/*54. Spiral Matrix

Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
*/

// #include<bits/stdc++.h>
// using namespace std;
// void spiralOrder(vector<vector<int>>& matrix) {
//     vector<int>ans;
//     int n = matrix.size();
//     int m = matrix[0].size() ;
//     int left = 0 , right = m-1;
//     int top = 0 , bottom = n-1;
//     while(left <= right && top <= bottom){
//         // left to right
//         for(int i = left ; i<= right ;i++){
//             ans.push_back(matrix[top][i]) ;
//         }
//         top++;
//         // top to bottom .
//         for(int i = top ; i<= bottom;i++){
//             ans.push_back(matrix[i][right]);
//         }
//         right--;
//         // right to left.
//         // check karo ki row hai ki nhi print karne wali.
//         if(top<=bottom){
//             for(int i = right;i>=left;i--){
//                 ans.push_back(matrix[bottom][i]) ;
//             }
//         }
//         bottom--;
//         // bottom to top.
//         // check karo ki column hai ki nhi
//         if(left <= right){
//             for(int i = bottom ; i>=top ;i--){
//                 ans.push_back(matrix[i][left]) ;
//             }

//         }
      
//         left++;
//     }
//     for(int i = 0 ;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }
// int main() 
// {
    
//     // vector<vector<int>> arr (4,vector<int>(4));
//     // arr = {
//     //     {1,2,3,10},
//     //     {4,5,6,11},
//     //     {7,8,9,12}
//     // };
//     vector<vector<int>> arr (3,vector<int>(3));
//     arr = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     spiralOrder(arr);

     
     
//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void spiralOrder(vector<vector<int>>& matrix) {
    vector<int>ans;
    int n = matrix.size();
    int m = matrix[0].size() ;
    int left = 0 , right = m-1;
    int top = 0 , bottom = n-1;
    int d = 0 ;
    while(left <= right && top <= bottom){
        // left to right
        if(d==0){
            for(int i = left ; i<= right ;i++){
                ans.push_back(matrix[top][i]) ;
            }
            top++;
            d= 1 ;
        }

  
        // top to bottom .
        else if(d==1){
            for(int i = top ; i<= bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            d= 2 ;
        }

       
        // right to left.
        // check karo ki row hai ki nhi print karne wali.
        else if(d==2){
            for(int i = right;i>=left;i--){
                ans.push_back(matrix[bottom][i]) ;
            }
            bottom--;
            d= 3;
        }
        
        // bottom to top.
        // check karo ki column hai ki nhi
        else if(d==3){
            for(int i = bottom ; i>=top ;i--){
                ans.push_back(matrix[i][left]) ;
            }
            left++;
            d=0;

        }
      
        
    }
    for(int i = 0 ;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main() 
{
    
    // vector<vector<int>> arr (4,vector<int>(4));
    // arr = {
    //     {1,2,3,10},
    //     {4,5,6,11},
    //     {7,8,9,12}
    // };
    vector<vector<int>> arr (4,vector<int>(4));
    arr = {
        {1,2,3,10},
        {4,5,6,11},
        {7,8,9,12},
        {13,14,15,16}
    };
    spiralOrder(arr);

     
     
  return 0;
}