
#include<bits/stdc++.h>
using namespace std;
void rotateImage90(vector<vector<int>> &arr){
    int n = arr.size() ; // this give row size of array.
    // for transpose 
    for(int i = 0 ;i<n;i++){
        for(int j = i ;j<n;j++){
            swap(arr[i][j],arr[j][i]) ;
        }
    }

    // after transpose i need to rotate each vector in 2d vector.
    // for reverse inner vector.
    
    for(int i = 0 ;i<n;i++){
        reverse(arr[i].begin(),arr[i].end()) ;
    }

}
void print(vector<vector<int>> & arr){
    int n = arr.size() ;
    for(int i =  0 ;i<n;i++){
        for(int j = 0;j<n ;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
}
int main() 
{
    vector<vector<int>>arr(3,vector<int>(3));
    int n = 3;
    for(int i =0; i<n ;i++){
        for(int j = 0 ;j<n;j++){
            cin>>arr[i][j] ;
        }
    }
    cout<<"before rotation : "<<endl;
    print(arr);
    
    cout<<"After rotation : "<<endl;
    rotateImage90(arr);
    print(arr);
 
   

     
     
  return 0;
}