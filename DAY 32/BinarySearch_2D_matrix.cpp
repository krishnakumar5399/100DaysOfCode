#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<vector<int>>arr,int target){
    
    int n = arr.size() ;  // it is denoted row size ;
    int m = arr[0].size() ; // it is denoted col size ;
    int s = 0 ;
    int e = n*m-1 ;
    // let virtually convert 2d vector in mind 1d and search simple binary search ;

    while(s<=e){
        int mid = (s+e) /2 ;
        int row = mid / m ; // because every row multiple of colmn that' why.
        int col = mid % m ; // because I want find co;mn indeces ;
        if(arr[row][col] == target){
            return true;
        }
        else if (arr[row][col] < target){
            s = mid +1 ;
        }
        else{
            e = mid - 1 ;
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
    int target = 148 ;

    if(binarySearch(arr,target)){
        cout<<"target is found ." ;
    }
    else{
        cout<<"target is not found "<<endl;
    }

     
     
  return 0;
}