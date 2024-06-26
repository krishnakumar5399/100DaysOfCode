// set zero matrix .

/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

*/


// Brute force solutions

// #include<bits/stdc++.h>
// using namespace std;
// void setZero (vector<vector<int>> & arr){
//     int n = arr.size();  // row no.
//     int m = arr[0].size() ;  //  col.
//     for(int i = 0 ;i<n;i++){
//         for(int j = 0 ;j<m;j++){
//             if(arr[i][j] == 0){
//                 // marked[i]
//                 // 0 wali row me -1 fill kar do
//                 for(int k = 0 ;k<m;k++){
//                     if(arr[i][k] !=0){
//                         arr[i][k] = -1 ;
//                     }
//                 }

//                 // marked j
//                 // zero wali colmn me -1 fill kar do.
//                 for(int l = 0 ;l<n;l++){
//                     if(arr[l][j] !=0 ){
//                         arr[l][j] = -1 ;
//                     }
//                 }

//             }
//         }
//     }

//     //fill 0 in place of -1 ;
    
//     for(int i = 0 ;i<n;i++){
//         for(int j = 0 ;j<m;j++){
//             if(arr[i][j] == -1){
//                 arr[i][j] = 0 ;
//             }
//         }
//     }


// }

// int main() 
// {
//     vector<vector<int>>arr(3,vector<int>(3));
//     arr={
//         {1,1,1},
//         {1,0,1},
//         {1,1,1}
//     };
//     setZero(arr) ;
//     for(int i = 0 ;i<arr.size();i++){
//         for(int j = 0 ;j<arr[0].size();j++){
//             cout<<arr[i][j]<<" " ;
//         }
//         cout<<endl;
//     }
     
     
//   return 0;
// }





// better Approach.

#include<bits/stdc++.h>
using namespace std;
void setZero(vector<vector<int>>&arr){
    int n = arr.size() ;
    int m = arr[0].size() ;
    int row[n] = {0} ;
    int col[m] = {0} ;
    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<m;j++){
            if(arr[i][j]==0){
                row[i] = 1 ;
                col[j] = 1 ;
            }
        }
    }

    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<m;j++){
            if(row[i] == 1 || col[j] == 1){
                arr[i][j] = 0 ;
            }
        }
    }
}
int main() 
{
    vector<vector<int>>arr(3,vector<int>(3));
    arr={
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };
    setZero(arr) ;
    for(int i = 0 ;i<arr.size();i++){
        for(int j = 0 ;j<arr[0].size();j++){
            cout<<arr[i][j]<<" " ;
        }
        cout<<endl;
    }
     
     
  return 0;
}